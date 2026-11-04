// name: FUN_100148362
// address: 100148362

undefined4 FUN_100148362(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_30 [12];
  undefined4 local_24;
  
  FUN_1001a7b90(local_30);
  uVar1 = FUN_1001a9738(param_1,local_30,&local_24);
  if ((char)uVar1 != '\0') {
    *param_3 = local_24;
  }
  FUN_1001ab240(local_30);
  return uVar1;
}

