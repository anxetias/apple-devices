// name: FUN_10058fa81
// address: 10058fa81

undefined8 FUN_10058fa81(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char local_70 [80];
  
  FUN_1001c62d9(param_3,0x420);
  iVar1 = FUN_100188c55(param_2,param_1,0,param_3,local_70);
  if ((iVar1 == 0) && (local_70[0] == '\0')) {
    FUN_100182d4d(param_3);
  }
  else if (iVar1 == 0) goto LAB_10058fae2;
  uVar2 = FUN_100181256(param_2,param_1,param_3);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_10058fae2:
  FUN_10018e077(param_3);
  return 0;
}

