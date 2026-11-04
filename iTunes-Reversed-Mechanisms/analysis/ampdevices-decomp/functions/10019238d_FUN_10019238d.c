// name: FUN_10019238d
// address: 10019238d

undefined8 FUN_10019238d(long param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 local_d48 [1176];
  uint local_8b0;
  int local_8ac;
  long local_8a8;
  long local_898;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006947cc(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    ___bzero(&local_8b0,0x878);
    ___bzero(local_d48,0x498);
    puVar7 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      puVar7 = local_d48;
    }
    iVar2 = _statfs_INODE64(param_1 + 0x19,&local_8b0);
    if (iVar2 != 0) {
      piVar3 = ___error();
      uVar4 = FUN_1001eb020(*piVar3);
      if ((int)uVar4 != 0) goto LAB_100192507;
    }
    uVar4 = FUN_10019274c(&local_8b0,puVar7);
    if ((int)uVar4 == 0) {
      puVar5 = param_2;
      if (param_2 == (undefined1 *)0x0) {
        puVar5 = local_d48;
      }
      *(undefined8 *)(puVar5 + 0x478) = 0;
      *(undefined8 *)(puVar5 + 0x480) = 0;
      *(undefined8 *)(puVar5 + 0x488) = 0;
      uVar6 = (ulong)local_8b0;
      *(ulong *)(puVar5 + 0x468) = local_8a8 * uVar6;
      *(ulong *)(puVar5 + 0x470) = local_898 * uVar6;
      *(uint *)(puVar5 + 0x478) = local_8b0;
      *(long *)(puVar5 + 0x480) = local_8a8;
      *(long *)(puVar5 + 0x488) = local_898;
      if (uVar6 == 0) {
        *(undefined4 *)(puVar5 + 0x478) = 0x1000;
      }
      iVar2 = 0x100000;
      if (local_8ac != 0x1000) {
        iVar2 = local_8ac;
      }
      puVar5 = local_d48;
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = param_2;
      }
      *(int *)(puVar5 + 0x490) = iVar2;
      if (param_3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_10018f68d(puVar7);
      }
    }
  }
LAB_100192507:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

