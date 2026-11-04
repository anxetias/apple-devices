// name: FUN_10013cba0
// address: 10013cba0

undefined4 FUN_10013cba0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_30 [12];
  undefined4 local_24;
  
  FUN_1001a7b90(local_30);
  cVar1 = FUN_1001a9738(param_1,local_30,&local_24);
  if (cVar1 != '\0') {
    param_3 = local_24;
  }
  FUN_1001ab240(local_30);
  return param_3;
}

