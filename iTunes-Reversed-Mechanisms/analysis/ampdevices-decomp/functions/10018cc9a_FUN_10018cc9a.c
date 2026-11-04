// name: FUN_10018cc9a
// address: 10018cc9a

int FUN_10018cc9a(undefined8 param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 local_128 [80];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_48 = 0;
  iVar3 = FUN_10018e4a1(param_1,local_128);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = 0;
      sVar2 = _FSGetCatalogInfo(local_128,0x400400,&local_d8,0,0,0);
      if (sVar2 == 0) {
        lVar6 = CONCAT44(uStack_90,uStack_94);
        uVar7 = 0x400400;
        if (lVar6 == 0) {
          uVar7 = 0;
        }
        if (param_3 != 0) {
          iVar5 = 0;
          do {
            iVar3 = FUN_10018e4a1(param_2,local_128);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_1006920b9(iVar3,uVar4);
                }
              }
              break;
            }
            sVar2 = _FSSetCatalogInfo(local_128,uVar7,&local_d8);
            iVar3 = iVar5;
            if (sVar2 != 0) {
              iVar3 = (int)sVar2;
            }
            if ((param_4 != '\0') && (sVar2 != 0)) {
              if (sVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_10069204d((int)sVar2,uVar4);
                }
              }
              break;
            }
            param_2 = param_2 + 0x420;
            param_3 = param_3 + -1;
            iVar5 = iVar3;
          } while (param_3 != 0);
          lVar6 = CONCAT44(uStack_90,uStack_94);
        }
        if (lVar6 != 0) {
          _CFRelease();
        }
      }
      else {
        iVar3 = -0x80;
        if (sVar2 != -0x80) {
          iVar3 = (int)sVar2;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_100692125(iVar3,uVar4);
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692191(iVar3,uVar4);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

