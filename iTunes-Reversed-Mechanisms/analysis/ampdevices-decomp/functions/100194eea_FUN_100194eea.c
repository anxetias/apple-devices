// name: FUN_100194eea
// address: 100194eea

undefined8 *
FUN_100194eea(undefined8 param_1,double param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,int param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  
  if (param_7 == 0) {
    param_7 = param_6;
  }
  dVar6 = (double)FUN_1001951b8(param_4,param_6);
  dVar9 = param_2;
  dVar7 = (double)FUN_1001951b8(param_5,param_7);
  bVar1 = true;
  if (0x1f < param_6) {
    bVar3 = false;
    bVar2 = true;
    bVar4 = false;
    switch(param_6) {
    case 0x20:
      bVar3 = true;
      bVar4 = false;
      bVar2 = false;
      goto LAB_100194fcb;
    case 0x21:
    case 0x24:
      bVar4 = true;
      bVar3 = false;
      goto LAB_100194fc9;
    case 0x22:
      bVar4 = true;
      bVar3 = true;
LAB_100194fc9:
      bVar2 = true;
LAB_100194fcb:
      bVar1 = true;
      break;
    case 0x23:
      break;
    default:
      if (param_6 != 0x40) {
        bVar5 = param_6 == 0x42;
        goto LAB_100194fa9;
      }
LAB_100194fb9:
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
    }
    goto switchD_100194f79_caseD_23;
  }
  switch(param_6) {
  case 0:
    bVar4 = false;
    bVar2 = false;
    goto LAB_100194feb;
  case 1:
  case 4:
    bVar4 = false;
    goto LAB_100194fe6;
  case 2:
    bVar4 = true;
LAB_100194fe6:
    bVar2 = true;
LAB_100194feb:
    bVar3 = false;
    bVar1 = false;
    break;
  case 3:
    bVar3 = false;
    bVar2 = true;
    bVar4 = false;
    break;
  default:
    if (param_6 == 0x10) goto LAB_100194fb9;
    bVar5 = param_6 == 0x12;
LAB_100194fa9:
    bVar3 = false;
    bVar2 = true;
    bVar4 = false;
    if (bVar5) {
      bVar3 = true;
      bVar4 = false;
      goto LAB_100194fc9;
    }
  }
switchD_100194f79_caseD_23:
  if (0x1f < param_7) {
    switch(param_7) {
    case 0x20:
      dVar9 = 0.0;
      if (bVar1) {
        dVar9 = dVar7 - dVar6;
      }
      _CGRectOffset(dVar9,0,param_3);
      goto LAB_100195108;
    case 0x22:
      bVar3 = true;
    case 0x21:
    case 0x24:
      bVar4 = true;
      break;
    case 0x23:
      break;
    default:
      if (param_7 == 0x40) goto LAB_100195086;
      if (param_7 == 0x42) goto LAB_100195081;
    }
switchD_10019500a_caseD_3:
    if (!bVar1) goto switchD_10019500a_caseD_1;
    dVar7 = dVar7 - dVar6;
    goto LAB_1001950c2;
  }
  switch(param_7) {
  case 0:
switchD_10019500a_caseD_0:
    dVar7 = 0.0;
    break;
  case 1:
  case 4:
    goto switchD_10019500a_caseD_1;
  case 2:
    bVar4 = true;
    goto switchD_10019500a_caseD_1;
  case 3:
    goto switchD_10019500a_caseD_3;
  default:
    if (param_7 != 0x10) {
      if (param_7 == 0x12) {
LAB_100195081:
        bVar3 = true;
      }
      goto switchD_10019500a_caseD_3;
    }
LAB_100195086:
    if (!bVar1) goto switchD_10019500a_caseD_0;
    dVar7 = dVar7 - dVar6;
  }
LAB_1001950f7:
  dVar9 = 0.0;
LAB_1001950fb:
  _CGRectOffset(dVar7,dVar9,param_3);
  if (bVar3) {
LAB_100195108:
    auVar8 = roundsd(ZEXT816(0),*param_3,9);
    *param_3 = auVar8._0_8_;
    auVar8 = roundsd(ZEXT816(0),param_3[2],9);
    param_3[2] = auVar8._0_8_;
  }
  if (bVar4) {
    auVar8 = roundsd(ZEXT816(0),param_3[1],9);
    param_3[1] = auVar8._0_8_;
    auVar8 = roundsd(ZEXT816(0),param_3[3],9);
    param_3[3] = auVar8._0_8_;
  }
  return param_3;
switchD_10019500a_caseD_1:
  dVar7 = 0.0;
LAB_1001950c2:
  if (!bVar2) goto LAB_1001950f7;
  dVar9 = dVar9 - param_2;
  goto LAB_1001950fb;
}

