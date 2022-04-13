void ordena(int v[]){
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(v[j] > v[j+1]){
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1]=tmp;
            }
        }
    }
}

void setup(){
    Serial.begin(9600);
    delay(10);
}

int lista[] = {4,3,2,1};
int n = sizeof(lista)/sizeof(lista[0]);

void loop(){
    Serial.print("Lista a ordenar: ");
    for(int i = 0; i < n; i++){
        Serial.print(lista[i]);
    }
    Serial.println();
    ordena(lista);
    Serial.print("Lista ordenada: ");
    for (int j = 0; j < n; j++){
        Serial.print(lista[j]);
    }
    Serial.println();
    delay(20000);
    
}