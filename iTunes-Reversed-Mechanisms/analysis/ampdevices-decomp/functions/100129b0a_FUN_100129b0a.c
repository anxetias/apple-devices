// name: FUN_100129b0a
// address: 100129b0a

byte FUN_100129b0a(undefined8 param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  undefined1 local_30 [15];
  byte local_21;
  
  FUN_1001a7b90(local_30);
  cVar1 = FUN_1001a957a(param_1,local_30,&local_21);
  if (cVar1 == '\0') {
    local_21 = param_3;
  }
  FUN_1001ab240(local_30);
  return local_21 & 1;
}

