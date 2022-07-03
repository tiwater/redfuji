
node {
    // Internal state variables defined at this level persists across evaluations
    Number foo;
    uint8_t bar = 5;

    void evaluate(Context ctx) {
        bar += 42;
auto f = [](int a) -> int { return a + 1; };
        auto b = f(1);
        Serial.printf("%d", b);
        if (isSettingUp()) {
            // This run once
            foo = (Number)(bar + 1);
        }
    }
}
