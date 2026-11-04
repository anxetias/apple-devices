// name: FUN_1001f7080
// address: 1001f7080

int FUN_1001f7080(int *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined1 local_1ca0 [64];
  undefined4 *local_1c60;
  undefined1 local_1c58 [3072];
  undefined1 local_1058 [3072];
  undefined1 local_458 [1048];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001f7098;
  auVar9 = FUN_100108310();
  lVar1 = -auVar9._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7103;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7113;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7123;
      FUN_1006c89bd(uVar5);
    }
  }
  else {
    *param_4 = 0;
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f70c7;
    cVar2 = FUN_10017cbd0();
    if (cVar2 == '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f712a;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f713a;
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7146;
        FUN_1006c8947(uVar5);
      }
    }
    else if (*param_1 == 0x41464350) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f70d9;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f70e9;
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f70f9;
        FUN_1006c88d1(uVar5);
      }
    }
    else {
      if (param_2 != 0) {
        puVar8 = local_458;
        if (auVar9._8_8_ != (undefined1 *)0x0) {
          puVar8 = auVar9._8_8_;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f716b;
        iVar3 = FUN_10017ecc9(param_1,param_2,puVar8,0);
        if (iVar3 == -0x2b) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f71e8;
          iVar4 = FUN_1001823de(param_1,local_1058,0xbfe);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7211;
              FUN_1001df1e7("/",local_1058,0xbfe);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7228;
              FUN_1001e5b77(param_2,local_1c58,0xbfe);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f723c;
              FUN_1001df1e7(local_1c58,local_1058,0xbfe);
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7246;
              puVar6 = (undefined4 *)FUN_1001c6429(0x440);
              if (puVar6 == (undefined4 *)0x0) {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72fe;
                uVar5 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f730e;
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7377;
                  FUN_1006c8779(uVar5);
                }
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f731b;
                FUN_1001782e9(0,0);
                iVar4 = -0x6c;
              }
              else {
                *puVar6 = 0x7a697066;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7268;
                local_1c60 = puVar6;
                FUN_1001a70c6(local_1ca0);
                iVar4 = 0;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7282;
                lVar7 = FUN_1001f4fe2(local_1058,0,0,local_1ca0);
                puVar6 = local_1c60;
                *(long *)(local_1c60 + 0x10c) = lVar7;
                if (lVar7 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f733f;
                  uVar5 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f734f;
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7381;
                    FUN_1006c8703(uVar5);
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f735c;
                  FUN_1001782e9(0,0);
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7364;
                  FUN_1001c64c1(puVar6);
                  iVar4 = -0x17;
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72a9;
                  FUN_10017ecc9(param_1,param_2,puVar8,0);
                  puVar6 = local_1c60;
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72c4;
                  _memcpy(local_1c60 + 2,puVar8,0x420);
                  *param_4 = puVar6;
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72d1;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72e1;
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f72f4;
                FUN_1006c87ef(iVar4,uVar5);
              }
            }
          }
        }
        else {
          iVar4 = -0x30;
          if (iVar3 != 0) {
            iVar4 = iVar3;
          }
        }
        goto LAB_1001f71ab;
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7184;
      uVar5 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f7194;
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f732e;
        FUN_1006c885b(uVar5);
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f71a5;
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1001f71ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar1) = FUN_1001f7388;
  ___stack_chk_fail();
}

