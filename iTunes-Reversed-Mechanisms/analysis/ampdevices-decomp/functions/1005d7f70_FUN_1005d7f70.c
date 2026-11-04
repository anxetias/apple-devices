// name: FUN_1005d7f70
// address: 1005d7f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005d7f70(long *param_1,uint param_2,long *param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong local_270;
  undefined8 *local_268;
  uint local_260;
  uint uStack_25c;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_24a = "inDataHandler != nullptr";
LAB_1005d832c:
      local_24c = 0x822;
      local_254 = "Assertion failure";
      local_258 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
      local_268 = (undefined8 *)0x0;
      bVar8 = false;
      while( true ) {
        local_270 = 8;
        iVar4 = (**(code **)(*(long *)*param_1 + 0xb8))
                          ((long *)*param_1,&local_270,&local_260,param_4);
        *param_5 = *param_5 + local_270;
        puVar6 = local_268;
        puVar2 = local_268;
        if (iVar4 != 0) break;
        if (local_270 != 8) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "count == sizeof(atom)";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          local_268 = (undefined8 *)0x0;
          FUN_1001782e9(0,0);
          iVar4 = -0x24;
          puVar6 = local_268;
          puVar2 = local_268;
          uVar5 = local_260;
          goto LAB_1005d820f;
        }
        uVar1 = (local_260 & 0xff00) << 8;
        uVar5 = local_260 >> 0x18 | (local_260 & 0xff0000) >> 8 | uVar1 | local_260 << 0x18;
        uStack_25c = uStack_25c >> 0x18 | (uStack_25c & 0xff0000) >> 8 | (uStack_25c & 0xff00) << 8
                     | uStack_25c << 0x18;
        if ((!bVar8 && (param_2 & 1) == 0) &&
           (((iVar4 = 1000, (uVar1 | local_260 << 0x18) == 0xfff90000 || (uVar5 == 0x41444946)) ||
            (uVar5 == 0x52494646)))) goto LAB_1005d820f;
        if (0x6d6f6f75 < (int)uStack_25c) {
          if ((uStack_25c == 0x736b6970) || (uStack_25c == 0x75647461)) goto LAB_1005d80b2;
          if (uStack_25c != 0x6d6f6f76) goto LAB_1005d8490;
          local_260 = uVar5;
          puVar6 = (undefined8 *)FUN_1001c63e1(uVar5);
          if (puVar6 != (undefined8 *)0x0) {
            auVar10._4_4_ = uStack_25c;
            auVar10._0_4_ = local_260;
            auVar10._8_8_ = 0;
            auVar10 = pshufb(auVar10,_DAT_10070e4b0);
            *puVar6 = auVar10._0_8_;
            if ((ulong)local_260 == 0) {
              local_268 = puVar6;
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "atom.size != 0";
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
LAB_1005d82f1:
              FUN_1001782e9(0,0);
              iVar4 = -0xd0;
              puVar6 = local_268;
              puVar2 = local_268;
              uVar5 = local_260;
              goto LAB_1005d820f;
            }
            local_270 = (ulong)local_260 - 8;
            iVar4 = (**(code **)(*(long *)*param_1 + 0xb8))
                              ((long *)*param_1,&local_270,puVar6 + 1,param_4);
            puVar2 = puVar6;
            uVar5 = local_260;
            if (iVar4 == -0x80) goto LAB_1005d820f;
            if (iVar4 != 0) {
              local_268 = puVar6;
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              puVar6 = local_268;
              puVar2 = local_268;
              uVar5 = local_260;
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                puVar6 = local_268;
                puVar2 = local_268;
                uVar5 = local_260;
              }
              goto LAB_1005d820f;
            }
            if (local_270 != (ulong)local_260 - 8) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              iVar4 = -0x24;
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "count == atom.size - sizeof(atom)";
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              goto LAB_1005d8206;
            }
            *param_5 = *param_5 + local_270;
            goto LAB_1005d827e;
          }
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          iVar4 = -0x6c;
          if (cVar3 != '\0') {
            local_4a = "myMoov != nullptr";
LAB_1005d8466:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
LAB_1005d8203:
          puVar6 = (undefined8 *)0x0;
LAB_1005d8206:
          FUN_1001782e9(0,0);
          puVar2 = local_268;
          uVar5 = local_260;
          goto LAB_1005d820f;
        }
        if ((uStack_25c != 0x66726565) && (uStack_25c != 0x66747970)) {
LAB_1005d8490:
          iVar4 = -0xd0;
          puVar6 = (undefined8 *)0x0;
          goto LAB_1005d820f;
        }
LAB_1005d80b2:
        if (local_260 == 0) {
          local_260 = uVar5;
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "atom.size != 0";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          local_268 = (undefined8 *)0x0;
          goto LAB_1005d82f1;
        }
        local_260 = uVar5;
        uVar5 = uVar5 - 8;
        while (uVar5 != 0) {
          uVar9 = 0x200;
          if (uVar5 < 0x200) {
            uVar9 = (ulong)uVar5;
          }
          local_260 = uVar5 - (int)uVar9;
          local_270 = uVar9;
          iVar4 = (**(code **)(*(long *)*param_1 + 0xb8))
                            ((long *)*param_1,&local_270,&local_258,param_4);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            local_268 = (undefined8 *)0x0;
            puVar6 = local_268;
            puVar2 = local_268;
            uVar5 = local_260;
            goto LAB_1005d820f;
          }
          if (local_270 != uVar9) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            iVar4 = -0x24;
            if (cVar3 == '\0') goto LAB_1005d8203;
            local_4a = "count == bytesToEat";
            goto LAB_1005d8466;
          }
          *param_5 = *param_5 + uVar9;
          uVar5 = local_260;
        }
        bVar8 = true;
      }
      uVar5 = local_260;
      if (iVar4 == -0x27) {
LAB_1005d820f:
        local_260 = uVar5;
        local_268 = puVar2;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_1001c64c1(puVar6);
        }
      }
      else if (iVar4 == -0x80) {
        iVar4 = -0x80;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar4 == 0) {
          puVar6 = (undefined8 *)0x0;
LAB_1005d827e:
          *param_3 = (long)puVar6;
          iVar4 = 0;
        }
      }
      goto LAB_1005d821c;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_24a = "moov != nullptr";
      goto LAB_1005d832c;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1005d821c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

