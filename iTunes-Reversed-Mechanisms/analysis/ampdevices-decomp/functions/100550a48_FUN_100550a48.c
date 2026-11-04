// name: FUN_100550a48
// address: 100550a48

int FUN_100550a48(long param_1,int param_2,undefined8 param_3,byte *param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined4 local_170;
  undefined1 local_169;
  undefined4 local_168;
  char *local_164;
  undefined2 local_15c;
  int local_15a;
  undefined4 local_148;
  char *local_144;
  undefined2 local_13c;
  char *local_13a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_4 == (byte *)0x0) || (*param_4 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_13a = "ownerID != nullptr && ownerID[0] != 0";
LAB_100550d0f:
      local_13c = 0x822;
      local_144 = "Assertion failure";
      local_148 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
    }
  }
  else {
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
      local_180 = param_5;
      local_170 = param_6;
      if (((param_2 != 0x4d46494c) && (iVar2 = -4, param_2 != 0x46494c45)) ||
         (iVar2 = FUN_10054d680(param_2,param_3,0), iVar2 != 0)) goto LAB_100550c7e;
      iVar3 = FUN_100548d34(0,param_1,param_2,param_3,0,1);
      iVar2 = 0;
      if (iVar3 != 0) goto LAB_100550c7e;
      iVar2 = 0;
      iVar3 = FUN_100549f1e(param_1,0,param_2,param_3,0,0,0);
      if (iVar3 != 0) goto LAB_100550c7e;
      iVar2 = 0;
      iVar3 = FUN_1005d872c(param_1 + 0x710,0,0,&local_178);
      if ((iVar3 != 0) || (local_178 == 0)) goto LAB_100550c7e;
      local_148 = 0x44494655;
      FUN_1001c631b(param_4 + 1,&local_144,*param_4);
      iVar3 = FUN_1001c97e8(local_178,0x2d2d2d2d,"com.apple.iTunes",0x10,&local_148,*param_4 + 4,
                            &local_188);
      if (local_188 == 0 || iVar3 != 0) {
        cVar1 = FUN_1001df6e9(param_4,"%http://www.cddb.com/id3/taginfo1.html",0);
        iVar3 = local_15a;
        if (cVar1 != '\0') {
          local_148 = 0x44494655;
          FUN_1001c631b("http://www.cddb.com/id3/taginfo.html",&local_144,0x24);
          iVar4 = FUN_1001c97e8(local_178,0x2d2d2d2d,"com.apple.iTunes",0x10,&local_148,0x28,
                                &local_188);
          iVar3 = local_15a;
          if (((local_188 != 0 && iVar4 == 0) &&
              (iVar4 = FUN_1001cad10(local_188,1,&local_169,local_180,local_170,param_7),
              iVar3 = local_15a, iVar4 != -0x80)) && (iVar4 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            iVar3 = local_15a;
            goto joined_r0x000100550e01;
          }
        }
      }
      else {
        iVar4 = FUN_1001cad10(local_188,1,&local_169,local_180,local_170,param_7);
        iVar3 = local_15a;
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          iVar3 = local_15a;
joined_r0x000100550e01:
          local_15a = iVar4;
          if (cVar1 != '\0') {
            local_15c = 0x400;
            local_164 = "Assertion failure";
            local_168 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_168,0x12);
            iVar3 = local_15a;
          }
        }
      }
      local_15a = iVar3;
      FUN_1001c8d4b(local_178,0);
      goto LAB_100550c7e;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_13a = "bufferFilled != nullptr";
      goto LAB_100550d0f;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100550c7e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

