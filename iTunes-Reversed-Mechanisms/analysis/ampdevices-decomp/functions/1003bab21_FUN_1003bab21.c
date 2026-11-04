// name: FUN_1003bab21
// address: 1003bab21

void FUN_1003bab21(void)

{
  char cVar1;
  
  cVar1 = FUN_1001cd44e("log-device",1,0);
  if (cVar1 != '\0') {
    DAT_1008c75b8 = FUN_1001cc24a("com.apple.AMPDevicesAgent","device");
  }
  return;
}

