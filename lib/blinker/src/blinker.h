
class Blinker
{
public:
    Blinker(int pin);
    void blink1(int times, int period_ms);
    void flash(int timems);
private:
    int pin_;
    int prevMill;
    int state;
};

