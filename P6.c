// Matheus Mendes dos Santos
// 11721ETE007


# include  < stdio.h >
# include  < stdlib.h >
# include  < math.h >

typedef
	struct p {
		float x;
		flutuar y;
	}
Ponto;

Ponto * gerap ( int N) {
	Ponto * p = (Ponto *) calloc (N, tamanho de (Ponto));
	int i;
	para (i = 0 ; i <N; i ++) {
		p [i]. x = cos (i * 2,0 * M_PI / (N- 1 ));
		p [i]. y = sin (i * 2,0 * M_PI / (N- 1 ));
	}
	return p;
}

void  mostrap (Ponto * pi, Ponto * pf) {
	if (pi <pf) {
		printf ( " ( % .3f , % .3f ) " , pi-> x , pi-> y );
		mostrap (pi + 1 , pf);
	}
}

int  main ()

{
	nao assinado  int N;
	Ponto * p;
	printf ( " Entre com o numero de pontos " );
	scanf ( " % d " , & N);
	getchar ();
	p = gerap (N);
	mostrap (p, p + N);
	livre (p);
	return  0 ;
}
