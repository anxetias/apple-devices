// name: FUN_10028c010
// address: 10028c010

void FUN_10028c010(void)

{
  char cVar1;
  
  cVar1 = FUN_1001cd44e("log-mp3",1,0);
  if (cVar1 != '\0') {
    DAT_1008b5bb8 = FUN_1001cc24a("com.apple.AMPDevicesAgent","mp3");
  }
  return;
}

