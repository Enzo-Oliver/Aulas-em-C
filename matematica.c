float dolar = 5.45;
float arearetangulo(float base, float altura){
    float area = base * altura;
    return area;
}
float areatriangulo(float base, float altura){
    float area = (base * altura)/2;
    return area;
}
float areacirculo(float raio){
    float area = 3.141592 * raio * raio;
    return area;
}
float areatrapezio(float bMaior, float bMenor, float altura){
    float area =((bMaior + bMenor) * altura)/2;
    return area;
}
float converteParaDolar(float valorReal){
    float valorConvertido = valorReal / dolar;
    return valorConvertido;
}