// name: FUN_1003c9de1
// address: 1003c9de1

undefined8 FUN_1003c9de1(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x626f6b70,0,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_10016aa8e(DAT_1008c4d90,param_2,"Purchases.plist",1,0);
  return uVar2;
}

