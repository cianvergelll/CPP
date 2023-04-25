#include <iostream>
using namespace std;

int main() {
    int choice, choice_course, choice_bsed_major, choice_explore;

    repeat:
    cout << "\n1. CTE/College of Teacher Education\n2. CCS/College of Computer Studies\n3. HTM/College of Hotel & Tourism Management\n";
    cout << "\nEnter your chosen Department: ";
    cin >> choice;

    switch (choice) {
    case 1:
        {
            repeat1:
            cout << "\n    CTE/College of Teacher Education\n        1. BEED/Bachelor of Science in Elementary Education\n        2. BSED/Bachelor of Science in Secondary Education\n        3. Go Back\n";
            cout << "\nEnter your choice of course: ";
            cin >> choice_course;

            switch (choice_course) {
                case 1:
                    cout << "\n        BEED/Bachelor of Science in Elementary Education\n";
                    cout << "            1st Semester:\n";
                    cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                    cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                FTC 1 - The Child and Adolescent Learners and Learning Principles\n";
                    cout << "\n            2nd Semester:\n";
                    cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                HUMANITIES - Art Appreciation\n                PCK 1 - Building and Enhancing New Literacies Across the Curriculum\n                PCK 2 - Technology for Teaching and Learning 1\n";
                    cout << "                MC 1 - Teaching Science in Elementary Grades (Biology and Chemistry)\n                MC 2 - Teaching Mathematics in Primary Grade\n                PE 2 - Folk Dancing\n";
                    cout << "                NSTP 2 - National Service Training Program\n";
                    break;
                case 2:
                    {
                        repeat_bsed_major:
                        cout << "\n    BSED/Bachelor of Science in Secondary Education\n        1. BSED Major in Math\n        2. BSED Major in English\n        3. Go Back\n";
                        cout << "Enter your chosen Secondary Education Major: ";
                        cin >> choice_bsed_major;
                        
                        switch (choice_bsed_major) {
                            case 1:
                                cout << "\n        BEED/Bachelor of Science in Elementary Education\n";
                                cout << "            1st Semester:\n";
                                cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                                cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                                cout << "\n            2nd Semester:\n";
                                cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                IT CP12(Lec) - Computer Programming 2\n                IT CP12(Lab) - Computer Programming 2\n                IT WST12(Lec) - Web Systems and Technologies\n";
                                cout << "                IT WST12(Lab) - Web Systems and Technologies\n                IT DLD12(Lec) - Digital Logic\n                IT DLD12(Lab) - Digital Logic\n";
                                cout << "                IT DM12 - Discrete Mathematics\n                IS 101 - Foreign Language(Fukien)\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                                break;
                            case 2:
                                cout << "\n        BEED/Bachelor of Science in Elementary Education\n";
                                cout << "            1st Semester:\n";
                                cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                                cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                                cout << "\n            2nd Semester:\n";
                                cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                IT CP12(Lec) - Computer Programming 2\n                IT CP12(Lab) - Computer Programming 2\n                IT WST12(Lec) - Web Systems and Technologies\n";
                                cout << "                IT WST12(Lab) - Web Systems and Technologies\n                IT DLD12(Lec) - Digital Logic\n                IT DLD12(Lab) - Digital Logic\n";
                                cout << "                IT DM12 - Discrete Mathematics\n                IS 101 - Foreign Language(Fukien)\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                            case 3:
                                goto repeat1;
                                break;
                            default:
                                cout << "\n-----Please choose within the available Courses!!!-----";
                                goto repeat_bsed_major;
                                break;
                        }
                    }

                    break;
                case 3:
                    goto repeat;
                default:
                    cout << "\n-----Please choose within the available Courses!!!-----";
                    goto repeat1;
                    break;
            }
        }
        break;
    case 2:
        {
            repeat2:
            cout << "\n    CCS/College of Computer Studies\n        1. BSCS/Bachelor of Science in Computer Studies\n        2. BSIT/Bachelor of Science in Information Technology\n        3. Go Back\n";
            cout << "\nEnter your choice of course: ";
            cin >> choice_course;

            switch (choice_course) {
                case 1:
                    cout << "\n        BSCS/Bachelor of Science in Computer Studies\n";
                    cout << "            1st Semester:\n";
                    cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                    cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                    cout << "\n            2nd Semester:\n";
                    cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                IT CP12(Lec) - Computer Programming 2\n                IT CP12(Lab) - Computer Programming 2\n                IT WST12(Lec) - Web Systems and Technologies\n";
                    cout << "                IT WST12(Lab) - Web Systems and Technologies\n                IT DLD12(Lec) - Digital Logic\n                IT DLD12(Lab) - Digital Logic\n";
                    cout << "                IT DM12 - Discrete Mathematics\n                IS 101 - Foreign Language(Fukien)\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                    break;
                case 2:
                    cout << "\n        BSIT/Bachelor of Science in Information Technology\n";
                    cout << "           Subject Codes & Names\n";
                    cout << "            1st Semester:\n";
                    cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                    cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                    cout << "\n            2nd Semester:\n";
                    cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                IT CP12(Lec) - Computer Programming 2\n                IT CP12(Lab) - Computer Programming 2\n                IT WST12(Lec) - Web Systems and Technologies\n";
                    cout << "                IT WST12(Lab) - Web Systems and Technologies\n                IT DLD12(Lec) - Digital Logic\n                IT DLD12(Lab) - Digital Logic\n";
                    cout << "                IT DM12 - Discrete Mathematics\n                IS 101 - Foreign Language(Fukien)\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                    break;
                case 3:
                    goto repeat;
                default:
                    cout << "\n-----Please choose within the available Courses!!!-----";
                    goto repeat2;
                    break;
            }
        }
        break;
    case 3:
        {
            repeat3:
            cout << "\n    HTM/College of Hotel and Tourism Management\n        1. BSHM/Bachelor of Science in Hotel Management\n        2. BSTM/Bachelor of Science in Tourism Management\n        3. Go Back";
            cout << "\nEnter your choice of course: ";
            cin >> choice_course;

            switch (choice_course) {
                case 1:
                    cout << "\n        BSHM/Bachelor of Science in Hotel Management\n";
                    cout << "            1st Semester:\n";
                    cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                    cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                    cout << "\n            2nd Semester:\n";
                    cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                HMC 2 - Legal Aspects in Tourism and Hospitality\n                HMC 3 - Macro Perspective of Tourism and Hospitality\n                HM PC 1 - Kitchen Essentials & Basic Food Preparation\n";
                    cout << "                HM PC 2 - Fundamentals in Food Service Operation, Accouting, & Business Management\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                    break;
                case 2:
                    cout << "\n        BSTM/Bachelor of Science in Tourism Management\n";
                    cout << "            1st Semester:\n";
                    cout << "                GE 1 - Purposive Communication\n                GE 2 - Readings in Philippine History\n                GE 3 - Mathematics in the Modern World\n                GE ELEC 1 - Masining na Pamamahayag\n";
                    cout << "                PE 1 - Gymnastics & Physical Education\n                NSTP 1 - National Service Training Program\n                IT IC11 - Introduction to Computing 1\n                IT CP11 - Computer Programming 1\n";
                    cout << "\n            2nd Semester:\n";
                    cout << "                GE ELEC 2 - Sining ng Komunikasyon\n                IT CP12(Lec) - Computer Programming 2\n                IT CP12(Lab) - Computer Programming 2\n                IT WST12(Lec) - Web Systems and Technologies\n";
                    cout << "                IT WST12(Lab) - Web Systems and Technologies\n                IT DLD12(Lec) - Digital Logic\n                IT DLD12(Lab) - Digital Logic\n";
                    cout << "                IT DM12 - Discrete Mathematics\n                IS 101 - Foreign Language(Fukien)\n                PE 2 - Folk Dancing\n                NSTP 2 - National Service Training Program\n";
                    break;
                case 3:
                    goto repeat;
                default:
                    cout << "\n-----Please choose within the available Courses!!!-----";
                    goto repeat3;
                    break;
            }
        }
        break;
    default:
        cout << "\n-----Please choose within the available Departments!!!-----";
        goto repeat;
        break;
    }

    cout << "\n        1. Home\n        2. Go Back\n        3. Exit\n";
    cout << "\nOptions: ";
    cin >> choice_explore;
    switch (choice_explore) {
        case 1:
            goto repeat;
            break;
        case 2:
            {
                if (choice == 1) {
                    goto repeat1;
                }
                else if (choice == 2) {
                    goto repeat2;
                }
                else {
                    goto repeat3;
                }
            }
            break;
        case 3:
            cout << "\n-----Thank you for your inquiry about the school, we do hope to see you as one of our student!!!-----\n\n";
            return 0;
            break;
        default:
            cout << "\n-----Thank you for your inquiry about the school, we do hope to see you as one of our student!!!-----\n\n";
            return 0;
            break;
    }
}