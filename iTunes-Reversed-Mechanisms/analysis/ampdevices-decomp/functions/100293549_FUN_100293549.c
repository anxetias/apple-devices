// name: FUN_100293549
// address: 100293549

int FUN_100293549(int param_1,undefined8 param_2,uint param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_388 [2];
  byte local_386;
  char local_385;
  char local_383;
  char local_382;
  undefined1 local_34c [4];
  long local_348;
  int local_340;
  uint local_33c;
  char local_338 [256];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_33c = param_3;
  if (((param_1 == 0x44574e4c) || (param_1 == 0x4d46494c)) || (iVar1 = -0x32, param_1 == 0x46494c45)
     ) {
    iVar1 = FUN_1002934ca(param_1,param_2,0);
    if (iVar1 == 0) {
      lVar3 = FUN_1003ae1f8();
      if (lVar3 == 0) {
        iVar1 = -0x6c;
      }
      else {
        local_348 = lVar3;
        iVar1 = FUN_10029650a(param_1,param_2,lVar3,lVar3 + 0x1660,0,0,0,local_388,&local_340,
                              local_34c,local_338,0);
        if (param_5 != (undefined4 *)0x0 && iVar1 == 0) {
          uVar2 = *param_4;
          uVar4 = local_33c;
          if (uVar2 < local_33c) {
            FUN_1001c34b7(0xc1e0001,param_5 + 1);
            FUN_1001c34b7(0xc1e0004 - (uint)(local_385 == '\0'),param_5 + 0x81);
            iVar5 = 0;
            if (local_386 < 3) {
              iVar5 = local_386 + 0xc1e0005;
            }
            FUN_1001c34b7(iVar5,local_238);
            uVar4 = local_33c;
            FUN_1001e1890(local_238,param_5 + 0x81);
            *param_5 = 0x666d6174;
            param_5 = param_5 + 0x101;
            uVar2 = *param_4 + 1;
            *param_4 = uVar2;
          }
          if (uVar2 < uVar4) {
            FUN_1001c34b7(0xc1e0002,param_5 + 1);
            iVar5 = 0xc1e0008;
            if (local_383 != '\x01') {
              iVar5 = 0xc1e000a;
              if (local_382 != '\x01') {
                iVar5 = (uint)(local_382 == '\x02') * 2 + 0xc1e0009;
              }
            }
            FUN_1001c34b7(iVar5,param_5 + 0x81);
            *param_5 = 0x6368616e;
            param_5 = param_5 + 0x101;
            uVar2 = *param_4 + 1;
            *param_4 = uVar2;
          }
          if (uVar2 < uVar4) {
            iVar5 = 0xc1e0012;
            if (local_340 - 1U < 5) {
              iVar5 = local_340 + 0xc1e000c;
            }
            FUN_1001c34b7(0xc1e000c,param_5 + 1);
            uVar4 = local_33c;
            FUN_1001c34b7(iVar5,param_5 + 0x81);
            *param_5 = 0x69643374;
            param_5 = param_5 + 0x101;
            uVar2 = *param_4 + 1;
            *param_4 = uVar2;
          }
          if (uVar2 < uVar4) {
            FUN_1001c34b7(0xc1e0013,param_5 + 1);
            if (local_338[0] == '\0') {
              FUN_1001c34b7(0xc1e0014,param_5 + 0x81);
            }
            else {
              FUN_1001e4f4b(local_338);
            }
            *param_5 = 0x656e6377;
            *param_4 = *param_4 + 1;
          }
        }
        lVar3 = local_348;
        FUN_1003ae783(local_348 + 0x4ca8);
        FUN_1001c64c1(lVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

