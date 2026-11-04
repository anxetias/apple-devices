// name: FUN_1001a2c03
// address: 1001a2c03

undefined1 FUN_1001a2c03(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001b7a44(local_40);
  *param_2 = 0;
  cVar1 = FUN_1001a29f2(param_1,"Content-Encoding",local_40);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_1001b7b04(local_30,"gzip");
    cVar1 = FUN_1001ba31c(local_40,local_30,0x1b1);
    FUN_1001b7a50(local_30);
    uVar2 = 1;
    if (cVar1 != '\0') {
      *param_2 = 1;
    }
  }
  FUN_1001b7a50(local_40);
  return uVar2;
}

