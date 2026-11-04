// name: FUN_10030666b
// address: 10030666b

int FUN_10030666b(long param_1,short *param_2,char param_3)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined4 local_278;
  char *local_274;
  undefined2 local_26c;
  char *local_26a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (short *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_26a = "flavor != nullptr";
LAB_10030684b:
      local_26c = 0x822;
      local_274 = "Assertion failure";
      local_278 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_278,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      iVar4 = FUN_1001de41f(lVar8 + 0x22f0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70),param_2
                           );
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_278 = 0x8220202;
          local_274 = "Assertion failure";
          local_26c = 0x400;
          local_26a = (char *)CONCAT44(local_26a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_278,0x12);
        }
      }
      if ((param_3 == '\0') || (*param_2 != 0)) goto LAB_1003067d3;
      bVar3 = FUN_10047eee6(*(undefined8 *)(param_1 + 8));
      if (0x23 < bVar3) goto LAB_1003067d3;
      uVar7 = (ulong)bVar3;
      if ((0x800018640U >> (uVar7 & 0x3f) & 1) == 0) {
        if ((0x400004006U >> (uVar7 & 0x3f) & 1) == 0) {
          if (uVar7 != 0x19) goto LAB_1003067d3;
          if (*(long *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
            pcVar9 = "pub";
          }
          else {
            pcVar9 = "pluspub";
          }
        }
        else if (*(ushort *)(param_1 + 0x54) < 0xc9) {
          pcVar9 = "1:128";
        }
        else {
          pcVar9 = "2:256";
        }
      }
      else {
        sVar1 = *(short *)(*(long *)(param_1 + 0x18) + 2);
        if (sVar1 == 2) {
          pcVar9 = "18:1080p";
        }
        else if (sVar1 == 1) {
LAB_10030675b:
          pcVar9 = "7:720p";
        }
        else {
          iVar5 = FUN_100313af0(param_1,&local_278);
          if (iVar5 != 0) goto LAB_1003067d3;
          lVar8 = FUN_100313d74(&local_278);
          if (lVar8 == 0) goto LAB_1003067d3;
          if (*(uint *)(lVar8 + 4) < 400) {
            pcVar9 = "3:320x240";
          }
          else {
            if (0x289 < *(uint *)(lVar8 + 4)) goto LAB_10030675b;
            pcVar9 = "4:640x480LC-128";
            if (200 < *(ushort *)(param_1 + 0x54)) {
              pcVar9 = "6:640x480LC-256";
            }
          }
        }
      }
      FUN_1001e04f5(pcVar9,param_2);
      goto LAB_1003067d3;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_26a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_10030684b;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1003067d3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

