// name: FUN_100361378
// address: 100361378

undefined8 FUN_100361378(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((DAT_1008bdd38 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1008bdd38), iVar1 != 0)) {
    FUN_100361c06(&PTR_cf_volumeWSG_100855748);
    ___cxa_atexit(FUN_10036143c,&DAT_1008bdd20,0x100000000);
    ___cxa_guard_release(&DAT_1008bdd38);
  }
  if (DAT_1008bdd28 != (undefined8 *)0x0) {
    puVar2 = &DAT_1008bdd28;
    puVar3 = DAT_1008bdd28;
    do {
      if ((ulong)puVar3[4] >= param_2) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[(ulong)puVar3[4] < param_2];
    } while (puVar3 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_1008bdd28) && ((ulong)puVar2[4] <= param_2)) {
      *param_3 = *(undefined4 *)(puVar2 + 5);
      return 1;
    }
  }
  return 0;
}

