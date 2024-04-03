/*
//beecrowd 1061
#include<stdio.h>
int main(){
	int h,hh,m,mm,s,ss,d,dd;

	scanf("Dia %d",&d);
	scanf("%d : %d : %d",&h,&m,&s);
	scanf("Dia %d",&dd);
	scanf("%d : %d : %d",&hh,&mm,&ss);

	s=ss-s;
	m=mm-m;
	h=hh-h;
	d=dd-d;

	if(s<0){
		s+=60;
		m--;
	}
	if(m<0){
		m+=60;
		h--;
	}
	if(h<0){
		h+=24;
		d--;
	}

	printf("%d dia(s)\n",d);
	printf("%d hora(s)\n",h);
	printf("%d minuto(s)\n",m);
	printf("%d segundo(s)\n",s);

	return 0;
}
*/
#include<stdio.h>

int main() {
    int h, hh, m, mm, s, ss, d, dd;

    if (scanf("Dia %d", &d) != 1) {
        printf("Invalid input format for day.\n");
        return 1;
    }

    if (scanf("%d : %d : %d", &h, &m, &s) != 3) {
        printf("Invalid input format for time.\n");
        return 1;
    }

    if (scanf("Dia %d", &dd) != 1) {
        printf("Invalid input format for day.\n");
        return 1;
    }

    if (scanf("%d : %d : %d", &hh, &mm, &ss) != 3) {
        printf("Invalid input format for time.\n");
        return 1;
    }

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dd - d;

    if (s < 0) {
        s += 60;
        m--;
    }
    if (m < 0) {
        m += 60;
        h--;
    }
    if (h < 0) {
        h += 24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}

