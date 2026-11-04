// name: FUN_10030ceed
// address: 10030ceed

void FUN_10030ceed(long param_1,char *param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int local_460;
  uint local_45c;
  long local_458 [64];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(local_58,0x20);
    if (((*(byte *)(lVar1 + 0xc2) & 0x10) != 0) && (*(long *)(lVar1 + 0x58) == param_1)) {
      FUN_100476928(lVar1,local_458);
      if (((short)local_458[0] != 0) &&
         (cVar3 = FUN_10017cbd0(*(undefined8 *)(param_1 + 0x80)), cVar3 != '\0')) {
        FUN_10017d489(*(undefined8 *)(param_1 + 0x80),&local_258);
        cVar3 = FUN_1001e3edc(&local_258,local_458,0);
        if (cVar3 == '\0') {
          FUN_1001e3e43(&local_258,0);
          cVar3 = FUN_1001e3edc(&local_258,local_458,0);
          if (cVar3 == '\0') {
            FUN_100471097(lVar1,&local_258,1);
            FUN_1005389ba(local_58,2);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x44) == '\x01') {
      local_458[0] = 0;
      if (((*(int *)(*(long *)(lVar1 + 0x10) + 0x84) != 0x646f5069) ||
          ((*(byte *)(*(long *)(lVar1 + 0x10) + 0x2d1a) & 0x20) == 0)) &&
         (local_45c = param_3, FUN_100177f1b(*(undefined4 *)(param_2 + 8),&local_460),
         param_3 = local_45c, *(int *)(param_1 + 0x5c) != local_460)) {
        *(int *)(param_1 + 0x5c) = local_460;
        FUN_1005389ba(local_58,10);
        param_3 = local_45c;
      }
      if (*param_2 == '\0') {
        lVar7 = *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x20);
        lVar2 = lVar7;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x68);
        lVar2 = lVar7;
        if ((lVar7 == 0) && ((*(byte *)(param_1 + 0x49) & 0x20) == 0)) {
          cVar3 = FUN_1001ee068();
          if ((cVar3 == '\0') ||
             ((uVar4 = FUN_1004744bf(lVar1,0), (uVar4 >> 0x16 & 1) == 0 ||
              (iVar5 = FUN_10030d27c(param_1), iVar5 != 0)))) {
            FUN_100182a5c(*(undefined8 *)(param_1 + 0x80),0,0,local_458);
            lVar7 = local_458[0];
            lVar2 = local_458[0];
          }
          else {
            lVar7 = 0;
            lVar2 = local_458[0];
          }
        }
      }
      local_458[0] = lVar2;
      if (*(long *)(param_1 + 0x68) != lVar7) {
        *(long *)(param_1 + 0x68) = lVar7;
        FUN_1005389ba(local_58,0xc);
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x80) + 0x428) != *(long *)(param_2 + 0x18)) {
      FUN_1002ae6f7(param_1);
      if (*(long *)(*(long *)(param_1 + 0x80) + 0x428) != 0) {
        *(undefined1 *)(param_1 + 0x44) = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x428) = *(undefined8 *)(param_2 + 0x18);
    }
    cVar3 = FUN_100539270(local_58);
    if (cVar3 != '\0') {
      if ((((param_3 & 2) == 0) && (cVar3 = FUN_100539333(local_58,&DAT_1007439f0), cVar3 != '\0'))
         && (cVar3 = FUN_10017cbd0(*(undefined8 *)(param_1 + 0x80)), cVar3 != '\0')) {
        FUN_10030d3cd(param_1,*(undefined8 *)(param_1 + 0x80),0x803);
      }
      if ((param_3 & 1) == 0) {
        FUN_1002b3aba(param_1,local_58);
      }
    }
    if (param_4 != 0) {
      FUN_100538877(param_4,local_58);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

