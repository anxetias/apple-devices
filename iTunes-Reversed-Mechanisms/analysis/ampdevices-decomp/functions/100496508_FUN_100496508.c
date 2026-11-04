// name: FUN_100496508
// address: 100496508

void FUN_100496508(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (undefined8 *)0x0) {
    cVar3 = FUN_100495380(param_1[1]);
    if (cVar3 != '\0') {
      lVar1 = param_1[1];
      if (*(int *)(param_1 + 0xd) != 0) {
        FUN_1001dcff5(lVar1 + 0x70);
      }
      if (*(int *)((long)param_1 + 0x7c) != 0) {
        FUN_1001dcff5(lVar1 + 0xc0);
      }
      lVar7 = param_1[0xb];
      if (lVar7 != 0) {
        if (*(int *)(param_1 + 10) != 0) {
          uVar8 = 0;
          do {
            FUN_100496687(param_1);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 10));
          lVar7 = param_1[0xb];
        }
        FUN_1001c64c1(lVar7);
      }
      FUN_10017060f(param_1[9]);
      FUN_10017060f(param_1[0x16]);
      FUN_100496a4d(lVar1);
      puVar4 = (undefined8 *)(lVar1 + 0x28);
      puVar2 = (undefined8 *)0x0;
      do {
        puVar6 = puVar2;
        puVar4 = (undefined8 *)*puVar4;
        if (puVar4 == (undefined8 *)0x0) goto LAB_1004965e3;
        puVar2 = puVar4;
      } while (puVar4 != param_1);
      puVar4 = (undefined8 *)(lVar1 + 0x28);
      if (puVar6 != (undefined8 *)0x0) {
        puVar4 = puVar6;
      }
      *puVar4 = *param_1;
      *param_1 = 0;
LAB_1004965e3:
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
      FUN_1001c5aec(*(undefined8 *)(lVar1 + 0x68),param_1);
      *(undefined1 *)(lVar1 + 4) = 1;
      goto LAB_10049661c;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "ITImageAlbumIsValid(album)";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10049661c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

