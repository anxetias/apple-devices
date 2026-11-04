// name: FUN_10051b38b
// address: 10051b38b

void FUN_10051b38b(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1002f930c();
  if (lVar3 != 0) {
    lVar5 = 0;
    bVar1 = false;
    do {
      uVar4 = FUN_100474dd0(lVar3,0);
      if ((uVar4 & 4) != 0) {
        if (lVar5 == 0) {
          lVar5 = FUN_1002b9ffb(param_1,0xb,1);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "podcastPlaylist != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            break;
          }
        }
        cVar2 = FUN_100485bb5(lVar3,lVar5,0);
        if (cVar2 == '\0') {
          if (!bVar1) {
            FUN_100313e0b(param_1);
          }
          FUN_100480385(lVar3);
          bVar1 = true;
        }
      }
      lVar3 = FUN_1002f9451(lVar3);
    } while (lVar3 != 0);
    if (bVar1) {
      FUN_1002fbbfc(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

