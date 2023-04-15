# Idea

I happen to live on the top floor of a two storey building in _Namma Bengaluru_, while Bengaluru is known for it's awesome climate and lots of humans converting idlis and coffee to code. While the climate here is a lot better compared to other parts of India, it's well known fact that productivity drops by ~4% per degree rise in temperature post 27℃  and that's what this project will strive for. During the day the temperatures touch close to 34℃ in my room thereby theoretically reducing my efficiency by 28% and during the night time when temperature dips below a certain level it disturbs my sleep cycle and further reduces my sleep quality and in the long term my ability to do greater things. Getting an air-conditioner will fix the problem, but I want to solve this problem in a way that reduces the cost and environmental impact before going for the most cash-guzzling and CO₂ emitting option.


# Rough Design Notes

Tl; dr: Make a dumb cooler **smarter**. Not something fancy with AI voice assistant, but something functional & useful without fluffy features.

## High Level Components

1. control-plane: A higher level module to show & measure the temperature & accept inputs for target temperature.
    - a micro-controller
    - a temperature sensor
    - a display
    - a power source
2. data-plane: A hardware specific lower level module to control various aspects of cooler device.
    - a micro-controller
    - a cooler, _I have a Symphony Diet 12lt personal cooler I've got back in 2018-ish but I believe the logic shouldn't be a lot different for any cooler_
    - a sensor to check cooler efficiency, power-consumption, coolant and other health aspects of device

## Low Level Components

1. A few ESP32/ESP8266
2. A temperature sensor, _DHT22_ seems like a good choice for me
3. Wires, wires and a few breadboard


# Goals

Tl; dr: Keep the room _just-enough_ cool during the day and night.

## MVP-1 Goals

- Cool the room sufficiently & appropriately
- Avoid cooling the room any further than what's necessary for optimum sleep and work, thus saving energy, i.e. auto-cut

## MVP-2 Goals

- Find and validate sleep and work quality in different temperatures and compare it against direct and indirect airflow
- draw fancy graphs and co-relate temperatures with sleep quality and morning mood & happiness


If you like the idea do check out the [Design Docs](./DESIGN-DOC.md) for more details and give this Git Repo a star, fork the project for your own cooling/heating needs and support/follow @vharsh.
