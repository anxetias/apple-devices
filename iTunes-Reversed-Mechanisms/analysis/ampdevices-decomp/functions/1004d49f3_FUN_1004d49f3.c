// name: FUN_1004d49f3
// address: 1004d49f3

int * FUN_1004d49f3(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar4 = (int *)FUN_10048b5ec(*(undefined8 *)(param_1 + 0x30),param_3);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      piVar11 = (int *)0x0;
      if (cVar3 == '\0') goto LAB_1004d4ada;
    }
    if (((*(byte *)(piVar4 + 0xa6) & 1) != 0) && (*(char *)((long)piVar4 + 0x2a3) != '\0')) {
      if (*(long *)(param_1 + 0x30) == param_2) {
        lVar7 = FUN_10036a7b7(piVar4);
        piVar11 = (int *)0x0;
        if (lVar7 == param_4) {
          piVar11 = piVar4;
        }
        goto LAB_1004d4ada;
      }
      if (*(long *)(piVar4 + 0xa4) != 0) {
        param_3 = *(long *)(piVar4 + 0xa4);
      }
      piVar6 = (int *)FUN_10048b5ec(param_2,param_3);
      if ((piVar6 != (int *)0x0) && (lVar7 = FUN_10036a7b7(piVar6), lVar7 == param_4)) {
        uVar1 = *(uint *)(*(long *)(piVar4 + 0x1e) + 0x18);
        uVar2 = *(uint *)(*(long *)(piVar6 + 0x1e) + 0x18);
        uVar10 = 0;
        if (uVar1 <= uVar2) {
          uVar9 = 0;
          if (uVar1 != 0) {
            uVar9 = 0;
            uVar10 = 0;
            while ((lVar7 = FUN_10037ddf6(*(undefined8 *)(piVar4 + 0xf0),1,0,uVar9), lVar7 != 0 &&
                   (*(long *)(lVar7 + 8) != 0))) {
              lVar8 = FUN_10037ddf6(*(undefined8 *)(piVar6 + 0xf0),1,0,uVar10);
              if ((lVar8 == 0) || (*(long **)(lVar8 + 8) == (long *)0x0)) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_4a = 
                  "destPlaylistTrack != nullptr && destPlaylistTrack->trackInfo != nullptr";
                  goto LAB_1004d4c8a;
                }
                goto LAB_1004d4c44;
              }
              uVar9 = uVar9 + (*(long *)(*(long *)(lVar7 + 8) + 0x188) == **(long **)(lVar8 + 8));
              uVar10 = uVar10 + 1;
              if ((uVar1 <= uVar9) || (uVar2 <= uVar10)) goto LAB_1004d4c50;
            }
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_4a = "playlistTrack != nullptr && playlistTrack->trackInfo != nullptr";
LAB_1004d4c8a:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1004d4c44:
            FUN_1001782e9(0,0);
          }
LAB_1004d4c50:
          piVar11 = (int *)0x0;
          if (uVar10 == uVar2 && uVar9 == uVar1) {
            piVar11 = piVar6;
          }
          goto LAB_1004d4ada;
        }
      }
    }
  }
  piVar11 = (int *)0x0;
LAB_1004d4ada:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar11;
}

