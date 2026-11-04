// name: FUN_10036a7df
// address: 10036a7df

undefined8 FUN_10036a7df(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10036a8ee:
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
      goto LAB_10036a9e2;
    }
    goto LAB_10036a90b;
  }
  if (*param_1 != 0x706c7374) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar8 = FUN_1001782e9(0,1);
    if (cVar8 == '\0') goto LAB_10036a8ee;
  }
  uVar9 = 0xffffffce;
  if ((((*(byte *)(param_1 + 0xa6) & 1) == 0) || (*(char *)((long)param_1 + 0x2a3) == '\0')) ||
     (*(long *)(param_1 + 0xac) == 0)) goto LAB_10036a91a;
  if (param_2 == (undefined4 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_3a = "outSpec != nullptr";
      goto LAB_10036a9e2;
    }
  }
  else {
    FUN_1001c62d9(param_2);
    piVar1 = *(int **)(param_1 + 0xac);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0x4f4c5354)) && (piVar1[1] != 0)) {
      puVar10 = *(undefined4 **)(piVar1 + 2);
      uVar11 = (*(long *)(piVar1 + 4) - (long)puVar10 >> 3) * 0x6db6db6db6db6db7;
      if ((uVar11 & 0xffffffff) != 0) {
        uVar12 = 0;
        do {
          if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) {
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            uVar9 = *(undefined8 *)(puVar10 + 4);
            uVar6 = *(undefined8 *)(puVar10 + 6);
            uVar7 = *(undefined8 *)(puVar10 + 9);
            *(undefined8 *)(param_2 + 7) = *(undefined8 *)(puVar10 + 7);
            *(undefined8 *)(param_2 + 9) = uVar7;
            *(undefined8 *)(param_2 + 4) = uVar9;
            *(undefined8 *)(param_2 + 6) = uVar6;
            *param_2 = uVar2;
            param_2[1] = uVar3;
            param_2[2] = uVar4;
            param_2[3] = uVar5;
            uVar9 = 0;
            break;
          }
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 0xe;
        } while ((uVar11 & 0xffffffff) != uVar12);
        goto LAB_10036a91a;
      }
    }
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_3a = "numTracks != 0";
LAB_10036a9e2:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
LAB_10036a90b:
  FUN_1001782e9(0,0);
  uVar9 = 0xffffffce;
LAB_10036a91a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

