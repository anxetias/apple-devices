// name: FUN_10012a6a4
// address: 10012a6a4

char FUN_10012a6a4(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 local_30 [15];
  byte local_21;
  
  FUN_1001a7b90(local_30);
  local_21 = 0;
  cVar1 = FUN_1001a957a(param_1,local_30);
  if (cVar1 != '\0') {
    param_3 = '\x02' - (local_21 & 1);
  }
  FUN_1001ab240(local_30);
  return param_3;
}

