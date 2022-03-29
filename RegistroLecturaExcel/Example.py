from serialToExcel import SerialToExcel

serialToExcel = SerialToExcel("COM36",115200)

columnas = ["Nro Lectura","Valor"]

serialToExcel.setColumns(["Nro Lectura","Valor"])
serialToExcel.setRecordsNumber(200)
serialToExcel.readPort()

serialToExcel.writeFile("archivo1.xls")