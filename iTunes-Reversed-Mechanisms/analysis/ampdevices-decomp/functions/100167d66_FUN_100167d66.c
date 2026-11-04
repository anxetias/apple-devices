// name: FUN_100167d66
// address: 100167d66

undefined4 FUN_100167d66(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  cVar1 = FUN_100167740(param_1,param_2,&local_c);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_c;
  }
  return uVar2;
}

