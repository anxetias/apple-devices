// name: FUN_100484163
// address: 100484163

bool FUN_100484163(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_8c;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      pcVar8 = "playlistLocation != nullptr";
LAB_100484512:
      local_7c = 0x822;
      local_84 = "Assertion failure";
      local_88 = 0x8220202;
      local_7a = SUB82(pcVar8,0);
      uStack_78 = (undefined6)((ulong)pcVar8 >> 0x10);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
LAB_1004844bf:
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        pcVar8 = "playlistLocation->parent != nullptr";
        goto LAB_100484512;
      }
      goto LAB_1004844bf;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    iVar1 = *(int *)(*(long *)(*(long *)*param_1 + 8) + 0x84);
    plVar6 = (long *)FUN_100306f74(param_2);
    local_8c = 0;
    if (plVar6 != (long *)0x0) {
      cVar4 = '\0';
      bVar9 = false;
      do {
        if ((((plVar6[1] != 0) && (lVar2 = *(long *)(plVar6[1] + 0x10), lVar2 != 0)) &&
            ((*(byte *)(lVar2 + 0x1bb3) & 8) != 0)) ||
           (FUN_1002b0559(plVar6,2), *(char *)((long)plVar6 + 0x44) == '\x01' || iVar1 == 0x646f5069
           )) {
          FUN_1001b7a44(&local_88);
          local_68 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_72 = 0;
          plStack_70 = (long *)0x0;
          cVar3 = FUN_1003a76f7(param_1);
          if (cVar3 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_4a = "PlaylistItemPositionIsValid(playlistLocation)";
LAB_1004843ec:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_100484366:
            bVar9 = false;
            FUN_1001782e9(0,0);
          }
          else {
            if ((plVar6[1] == 0) || (*(long *)(plVar6[1] + 0x10) == 0)) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_4a = "TrackInstanceIsValid(trackInstance)";
                goto LAB_1004843ec;
              }
              goto LAB_100484366;
            }
            uStack_78 = SUB86(param_1,0);
            uStack_72 = (undefined2)((ulong)param_1 >> 0x30);
            local_68._0_5_ = CONCAT14(1,(undefined4)local_68);
            plStack_70 = plVar6;
            iVar5 = FUN_100483f95(*(undefined8 *)*param_1,0x706c616c,&local_88);
            if ((local_68 & 0xffffffe6) != 0) {
              uVar7 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar7,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = 
                "(params.u.canAcceptInstance.copyOptions & ~(kCopyPlaylistItemTranscodeFile | kCopyPlaylistItemUnzipFile | kCopyPlaylistItemZipFile)) == 0"
                ;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            bVar9 = iVar5 == 0;
            local_8c = (undefined4)local_68;
            cVar4 = local_68._4_1_;
          }
          FUN_1001b7a50(&local_88);
        }
        if (bVar9 != false) {
          if ((param_3 != (long *)0x0) && ((*param_3 == 0 || (cVar4 != '\0')))) {
            *param_3 = (long)plVar6;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_8c;
          }
          if ((param_3 == (long *)0x0) || (cVar4 != '\0')) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      goto LAB_1004844cb;
    }
  }
  bVar9 = false;
LAB_1004844cb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar9;
}

