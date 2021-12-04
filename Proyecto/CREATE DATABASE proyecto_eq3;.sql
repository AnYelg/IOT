CREATE DATABASE proyecto_eq3;

CREATE TABLE Mediciones
(
    valor INT,
    idMedicion INT,
    tsMedicion INT,
    idParametro INT,
    idDispositivo INT,
    PRIMARY KEY (idMedicion),
    FOREIGN KEY (idDispositivo)
        REFERENCES Dispositivo(idDispositivo),
    FOREIGN KEY (idParametro)
        REFERENCES Parametro(idParametro)

);

CREATE TABLE Parametros
(
    idParametro INT,
    nombre CHAR,
    valorMax INT,
    valorMin INT,
    idDispositivo INT,
    PRIMARY KEY (idParametro),
    FOREIGN KEY (idDispositivo)
        REFERENCES Dispositivo(idDispositivo),
);

CREATE TABLE Dispositivo
(
    idDispositivo INT,
    marca CHAR,
    modelo VARCHAR,
    idParametro INT,
    idLocal INT,
    dirMAX int,
    PRIMARY KEY(idDispositivo),
    FOREIGN KEY (idLocal)
        REFERENCES Ubicacion (idLocal),
    FOREIGN KEY (idParametro)
        REFERENCES Parametro (idParametro),
);

CREATE TABLE Ubicacion
(
    idLocal INT,
    situado CHAR,
    servidor CHAR,
    nivel INT,
    PRIMARY KEY (idLocal),
);
    
