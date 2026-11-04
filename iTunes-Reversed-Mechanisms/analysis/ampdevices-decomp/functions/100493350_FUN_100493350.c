// name: FUN_100493350
// address: 100493350

long FUN_100493350(char param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_2b8;
  undefined4 *puStack_2b0;
  undefined8 local_2a8;
  undefined6 uStack_2a0;
  undefined2 uStack_29a;
  undefined4 uStack_298;
  undefined2 uStack_294;
  undefined4 local_290;
  undefined3 uStack_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined1 local_260 [16];
  long local_250;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1003070df();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_250 = FUN_10048bbac(lVar3,0x3f,0);
    lVar5 = local_250;
    if (param_1 != '\x01' || local_250 != 0) goto LAB_1004934c5;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    puStack_2b0 = (undefined4 *)0x0;
    uStack_29a = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    local_290 = 0;
    uStack_28c = 0;
    local_288 = 0x3ff0000000000000;
    local_280 = 0;
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    FUN_1001b7b04(local_260,"Hidden Cloud PlaylistOnly Tracks");
    FUN_1001bb4c2(local_260,&local_228,0xff);
    uStack_294 = 0x3f;
    puStack_2b0 = &local_228;
    iVar2 = FUN_1002e2674(lVar3,1,&local_2b8,&local_250);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_100488970(local_250);
        FUN_1001b7a50(local_260);
        lVar5 = local_250;
        goto LAB_1004934c5;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x400;
        local_23a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x12);
      }
    }
    FUN_1001b7a50(local_260);
  }
  lVar5 = 0;
LAB_1004934c5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

