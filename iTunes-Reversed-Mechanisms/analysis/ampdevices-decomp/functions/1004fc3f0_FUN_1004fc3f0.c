// name: FUN_1004fc3f0
// address: 1004fc3f0

void FUN_1004fc3f0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long local_70;
  long local_68;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_100485bb5(param_2,param_1,0);
  if (cVar3 == '\0') {
    local_70 = *(long *)(param_1 + 0x78);
    local_68 = -1;
    lVar2 = local_68;
    if ((*(short *)(param_2 + 0x136) != 0) && (iVar7 = *(int *)(local_70 + 0x18), iVar7 != 0)) {
      iVar8 = 0;
      lVar6 = 0;
      local_5c = iVar7;
      do {
        lVar4 = FUN_10037ddf6(*(undefined8 *)(param_1 + 0x3c0),1,0,iVar8);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "playlistTrack != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          lVar4 = lVar6;
          iVar7 = local_5c;
        }
        else {
          uVar1 = *(ushort *)(*(long *)(lVar4 + 8) + 0x13a);
          lVar2 = lVar6;
          if ((*(ushort *)(param_2 + 0x13a) < uVar1) ||
             ((uVar1 == *(ushort *)(param_2 + 0x13a) &&
              (*(ushort *)(param_2 + 0x136) < *(ushort *)(*(long *)(lVar4 + 8) + 0x136))))) break;
        }
        iVar8 = iVar8 + 1;
        lVar6 = lVar4;
        lVar2 = local_68;
      } while (iVar7 != iVar8);
    }
    local_68 = lVar2;
    FUN_100489a1f(param_1,param_2,&local_70,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

