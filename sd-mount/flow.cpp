#include <SD_MMC.h>
#include "Log.h"

node {

    void evaluate(Context ctx) {
        if(isInputDirty<input_INIT>(ctx)) {
            if (!SD_MMC.begin("/sdcard", false, false, 20000)) {
                logErr("SD_MMC mount failed");
                raiseError<output_DONE>(ctx);
            } else {
                emitValue<output_DONE>(ctx, 1);
            }
        }
    }
}
