// name: FUN_1001cacbc
// address: 1001cacbc

undefined8
FUN_1001cacbc(long param_1,int param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  for (puVar1 = *(undefined8 **)(param_1 + 0x10); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    iVar2 = iVar2 + (uint)(*(int *)(puVar1[4] + 4) == 0x61746164);
  }
  if ((0 < param_2) && ((param_2 <= iVar2 || ((param_2 == 1 && (iVar2 == 0)))))) {
    uVar3 = FUN_1001ca99e(param_1,param_2,param_3,param_4,param_5,0);
    return uVar3;
  }
  return 0xffffffce;
}

