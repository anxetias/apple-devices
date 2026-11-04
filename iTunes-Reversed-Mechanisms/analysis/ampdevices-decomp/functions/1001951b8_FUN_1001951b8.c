// name: FUN_1001951b8
// address: 1001951b8

double FUN_1001951b8(double *param_1,uint param_2)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = *(double *)PTR__CGPointZero_10082e300;
  uVar1 = (ulong)param_2;
  if (param_2 < 0x25) {
    if ((0x17UL >> (uVar1 & 0x3f) & 1) == 0) {
      if ((0x170000UL >> (uVar1 & 0x3f) & 1) == 0) {
        if ((0x1700000000U >> (uVar1 & 0x3f) & 1) == 0) goto LAB_10019521c;
        dVar2 = param_1[2] * DAT_100700b00 + *param_1;
      }
      else {
        dVar2 = *param_1;
      }
    }
    else {
      dVar2 = 0.0;
    }
  }
  else {
LAB_10019521c:
    if ((param_2 - 0x40 < 5) && (param_2 - 0x40 != 3)) {
      dVar2 = (double)_CGRectGetMaxX();
    }
  }
  if ((int)param_2 < 0x20) {
    switch(uVar1) {
    case 0:
      goto switchD_10019527f_caseD_10;
    case 1:
      goto switchD_10019527f_caseD_11;
    case 2:
      goto switchD_10019527f_caseD_13;
    case 3:
      goto switchD_10019527f_caseD_13;
    case 4:
      goto switchD_10019527f_caseD_14;
    default:
      switch(param_2) {
      case 0x10:
        goto switchD_10019527f_caseD_10;
      case 0x11:
        goto switchD_10019527f_caseD_11;
      case 0x12:
        goto switchD_10019527f_caseD_13;
      default:
        goto switchD_10019527f_caseD_13;
      case 0x14:
        goto switchD_10019527f_caseD_14;
      }
    }
  }
  switch(param_2) {
  case 0x20:
switchD_10019527f_caseD_10:
    break;
  case 0x21:
switchD_10019527f_caseD_11:
    _CGRectGetMinY();
    break;
  case 0x22:
switchD_10019527f_caseD_13:
    return dVar2;
  case 0x23:
    break;
  case 0x24:
switchD_10019527f_caseD_14:
    _CGRectGetMaxY();
    return dVar2;
  default:
    switch(param_2) {
    case 0x40:
      goto switchD_10019527f_caseD_10;
    case 0x41:
      goto switchD_10019527f_caseD_11;
    case 0x42:
      goto switchD_10019527f_caseD_13;
    default:
      break;
    case 0x44:
      goto switchD_10019527f_caseD_14;
    }
  }
switchD_10019527f_caseD_13:
  return dVar2;
}

