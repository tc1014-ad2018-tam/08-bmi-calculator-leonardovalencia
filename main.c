

double IMB_metrics(double KG, double M) {
    double IMBM;
    IMBM = KG / (M * M);
    return IMBM;
}


double IMB_imperial(double pd, double ft) {
    double IMBI;
    double KG;
    double M;
    KG = pd * 0.453592;
    M = ft * 0.3048;
    IMBI = KG / (M * M);
    return IMBI;
}

double categories(double IBM) {
    if (IBM < 18) {
        printf("You are underweight");
    } else if (IBM >= 19 && IBM < 25) {
        printf("You are on the normal weight");
    } else if (IBM >= 26 && IBM < 30) {
        printf("You are overweight");
    } else if (IBM >= 31 && IBM < 35) {
        printf("You have obessity");
    }
}

int main() {

    unsigned short int option = 0;
    double w;
    double h;
    double IBM;

    printf("Here I will help you calculate your IBM");
    printf("Do you want ot use the metric system or the imperial system");
    printf("What system would you like to use? \n Enter 1 to use the metric system \n Enter 2 to use the imperial system\n");
    scanf("i", &option);
    switch (option) {
        case 1:
            do {
                printf("Please give me your height in meters");
                scanf("lf", &h);
            } while (h < 0);
            printf("Give me your weight in Kg \n");
            scanf("%lf", &w);
            IBM = IMB_metrics(w, h);
            printf("\nYour IMB is %lf \n", IBM);
            categories(IBM);
            break;

        case 2:
            do {
                printf("\nGive me your height in Feets");
                scanf("%lf", &h);
            } while (h <= 0);
            printf("\nGive me your weight in Pounds");
            scanf("%lf", &w);

            IBM = IMB_imperial(w, h);
            printf("\nYour IBM is: %lf \n", IBM);
            categories(IBM);
            break;


    }


    return 0;
}