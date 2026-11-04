// name: FUN_10041aad0
// address: 10041aad0

void FUN_10041aad0(long param_1,int param_2,short param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((((param_2 + 0x80U & 0xffffff7f) == 0) || (param_2 - 0x581U < 2)) || (param_2 == 0x462)) ||
     (param_2 == 0x465)) goto LAB_10041ac62;
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0x1300);
    switch(iVar2) {
    case 0:
switchD_10041ab5f_caseD_0:
      param_3 = 0;
      break;
    case 1:
    case 6:
      if ((*(char *)(param_1 + 0x1357) == '\0') && (*(char *)(param_1 + 0x1358) != '\x01')) {
        if (iVar2 != 2) {
          if (iVar2 != 1) goto switchD_10041ab5f_caseD_3;
          if (*(char *)(param_1 + 0x1354) != '\x01') {
            param_3 = 0x10f0;
            if (*(char *)(param_1 + 0x5c) != '\x01') break;
            uVar6 = *(undefined4 *)(param_1 + 0x58);
            uVar5 = 0x10f1;
            uVar4 = 0x10f3;
            uVar3 = 0x10f2;
            uVar7 = 0x10f4;
            uVar8 = 0x111b;
            uVar11 = 0x1135;
            uVar10 = 0x1132;
            uVar9 = 0x112d;
            goto LAB_10041abe4;
          }
        }
        goto switchD_10041ab5f_caseD_2;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x58);
      uVar5 = 0x10db;
      uVar4 = 0x10dc;
      uVar3 = 0x10da;
      uVar7 = 0;
      uVar8 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
LAB_10041abe4:
      param_3 = FUN_1004174a0(uVar6,uVar5,uVar4,uVar3,uVar7,uVar8,uVar9,0,uVar10,uVar11);
      break;
    case 2:
switchD_10041ab5f_caseD_2:
      param_3 = 0x10eb;
      if (*(char *)(param_1 + 0x5c) == '\x01') {
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        uVar5 = 0x10ec;
        uVar4 = 0x10ee;
        uVar3 = 0x10ed;
        uVar7 = 0x10ef;
        uVar8 = 0x111a;
        uVar11 = 0x1134;
        uVar10 = 0x1131;
        uVar9 = 0x112c;
        goto LAB_10041abe4;
      }
      break;
    default:
switchD_10041ab5f_caseD_3:
      iVar2 = *(int *)(param_1 + 0x58);
      param_3 = 0x10e1;
      if (iVar2 < 0x69427269) {
        if (iVar2 < 0x4d616320) {
          if (iVar2 == 0x48416363) goto switchD_10041ab5f_caseD_0;
          if (iVar2 == 0x48506f64) {
            param_3 = 0x111d;
          }
        }
        else if (iVar2 == 0x4d616320) {
          param_3 = 0x111e;
        }
        else if (iVar2 == 0x57617463) {
          param_3 = 0x111c;
        }
      }
      else if (iVar2 < 0x6950686e) {
        if (iVar2 == 0x69427269) {
          param_3 = 0x111f;
        }
        else if (iVar2 == 0x69506164) {
          param_3 = 0x10e3;
        }
      }
      else if (iVar2 == 0x6950686e) {
        param_3 = 0x10e2;
      }
      else if (iVar2 == 0x69545620) {
        param_3 = 0x10e4;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0x5c);
  FUN_1001bb41a(param_1 + 0x60,local_238);
  FUN_100216f84(bVar1 + 1,(int)param_3,local_238,param_2,param_1 + 0x4c8,0);
LAB_10041ac62:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

