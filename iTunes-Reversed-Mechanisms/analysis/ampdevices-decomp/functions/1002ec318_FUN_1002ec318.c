// name: FUN_1002ec318
// address: 1002ec318

int FUN_1002ec318(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_f8;
  int local_f4;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined2 local_ea;
  undefined4 local_e8;
  undefined4 local_d8;
  char *local_d4;
  undefined2 local_cc;
  char *local_ca;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_70;
  undefined4 local_64;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (**(code **)(*param_1 + 0x10))();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_d8 = 0x8220202;
      local_d4 = "Assertion failure";
      local_cc = 0x822;
      local_ca = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,
                          "ch> **ERROR** AMPLEntireLibraryCommandDataCreator - couldn\'t add db data"
                          ,&local_d8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_168 = 0;
    uVar4 = FUN_1001a8626(param_2);
    uVar5 = FUN_1001a8610(param_2);
    iVar2 = FUN_1001601a5(&local_1a8,uVar4,uVar5);
    if (iVar2 == 0) {
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_138 = 0x3f800000;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x3f800000;
      local_108 = 0;
      FUN_1001c62d9(&local_d8,0xa0);
      local_108 = (**(code **)(*param_1 + 0x48))(param_1);
      iVar2 = FUN_100641eb3(lVar3,&local_1a8,&local_158,0,&local_d8,0,0);
      FUN_10016013b(&local_1a8);
      *(byte *)(lVar3 + 0x1b50) = *(byte *)(lVar3 + 0x1b50) | local_70;
      *(byte *)(lVar3 + 0x1b53) = *(byte *)(lVar3 + 0x1b53) | local_70;
      *(undefined4 *)(lVar3 + 0x8c) = local_64;
      if (iVar2 == 0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar4 = DAT_1008c7658;
        cVar1 = _os_log_type_enabled(DAT_1008c7658,0);
        if (cVar1 != '\0') {
          local_f8 = 0x4000300;
          local_f4 = local_94;
          local_f0 = 0x400;
          local_ee = local_8c;
          local_ea = 0x400;
          local_e8 = local_90;
          __os_log_impl(0x100000000,uVar4,0,
                        "ch> LOADED db objects - %d tracks, %d albums, %d playlists",&local_f8,0x14)
          ;
        }
        FUN_100587bd0(param_1[4],local_70,1);
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar4 = DAT_1008c7658;
        cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar1 != '\0') {
          local_f8 = 0x4000100;
          local_f4 = iVar2;
          __os_log_impl(0x100000000,uVar4,0x10,
                        "ch> **ERROR** ParseLibraryIntoTrackData returned err %d",&local_f8,8);
        }
      }
      FUN_1002842e4(&local_130);
      FUN_1002842e4(&local_158);
    }
    else {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar4 = DAT_1008c7658;
      cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
      if (cVar1 != '\0') {
        local_d8 = 0x4000100;
        local_d4 = (char *)CONCAT44(local_d4._4_4_,iVar2);
        __os_log_impl(0x100000000,uVar4,0x10,
                      "ch> **ERROR** CreateDBObjectsFromData - couldn\'t open buffer for reading err %d"
                      ,&local_d8,8);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

