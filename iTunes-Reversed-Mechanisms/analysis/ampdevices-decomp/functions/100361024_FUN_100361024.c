// name: FUN_100361024
// address: 100361024

undefined8 FUN_100361024(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((DAT_1008bdcd8 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1008bdcd8), iVar2 != 0)) {
    FUN_100361ad0(&PTR_cf_activityWindowHPos_1008551b8);
    ___cxa_atexit(FUN_1003610e4,&DAT_1008bdcc0,0x100000000);
    ___cxa_guard_release(&DAT_1008bdcd8);
  }
  if (DAT_1008bdcc8 != (undefined8 *)0x0) {
    puVar3 = &DAT_1008bdcc8;
    puVar4 = DAT_1008bdcc8;
    do {
      if ((ulong)puVar4[4] >= param_2) {
        puVar3 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_2];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 != &DAT_1008bdcc8) && ((ulong)puVar3[4] <= param_2)) {
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *param_3 = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}

