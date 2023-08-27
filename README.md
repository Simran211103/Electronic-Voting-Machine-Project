# Electronic Voting Machine with Plagiarism Detection

# Electronic Voting Machine with Plagiarism Detection

![License](https://img.shields.io/badge/license-MIT-blue)

Welcome to the Electronic Voting Machine with Plagiarism Detection project! This Arduino-based application provides a secure and efficient way to conduct electronic voting while also preventing false votes through plagiarism detection. It utilizes IR and touch sensors for vote verification.

## Table of Contents

1. [Features](#features)
2. [Getting Started](#getting-started)
    - [Hardware Setup](#hardware-setup)
    - [Software Setup](#software-setup)
    - [Usage](#usage)
3. [How It Works](#how-it-works)
4. [Contributing](#contributing)
5. [License](#license)
6. [Contact](#contact)

## Features

- **Plagiarism Detection:** The system prevents false votes by using a plagiarism detection algorithm that compares each vote with existing entries to identify potential duplicates.

- **Secure Voting:** The IR sensor detects the entry and exit of voters, ensuring that only authorized individuals can participate.

- **User-Friendly Interface:** Voters can use the touch sensor to cast their votes, making the process intuitive and accessible.

## Getting Started

### Hardware Setup

1. Connect the IR sensor to the Arduino according to the pin configuration in the code.

2. Connect the touch sensor to the Arduino according to the pin configuration in the code.

### Software Setup

1. Clone this repository to your local machine:

    ```bash
    git clone https://github.com/your-username/evm-plagiarism-detection.git
    ```

2. Open the Arduino IDE.

3. Load the `evm_plagiarism_detection.ino` sketch from the `arduino_code` directory.

4. Upload the sketch to your Arduino board.

### Usage

Follow these steps to use the Electronic Voting Machine:

1. As a voter approaches, the IR sensor detects their presence and initializes the voting process.

2. The system prompts the voter to use the touch sensor to cast their vote.

3. Once the vote is cast, the plagiarism detection algorithm compares the new vote with existing entries to prevent duplication.

4. Repeat the process for each voter.

5. After all votes are cast, view the voting results through the Arduino's serial monitor.


## Contact

For any questions or feedback, feel free to contact:

- Name: [Email](mailto:chetiwalsimran579@gmmail.com)

