// name: FUN_1004174a0
// address: 1004174a0

int FUN_1004174a0(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
                 short param_7,short param_8,short param_9,short param_10)

{
  if (param_1 < 0x69506164) {
    if (param_1 < 0x4d616320) {
      param_3 = param_8;
      if ((param_1 == 0x48416363) || (param_3 = param_7, param_1 == 0x48506f64)) goto LAB_100417530;
    }
    else {
      param_3 = param_9;
      if ((param_1 == 0x4d616320) ||
         ((param_3 = param_6, param_1 == 0x57617463 || (param_3 = param_10, param_1 == 0x69427269)))
         ) {
LAB_100417530:
        if (param_3 != 0) goto LAB_100417537;
      }
    }
  }
  else if (param_1 < 0x69506f64) {
    if ((param_1 == 0x69506164) || (param_3 = param_2, param_1 == 0x6950686e)) goto LAB_100417530;
  }
  else {
    param_3 = param_4;
    if ((param_1 == 0x69506f64) ||
       ((param_1 == 0x69506f74 || (param_3 = param_5, param_1 == 0x69545620)))) goto LAB_100417530;
  }
  param_3 = param_2;
LAB_100417537:
  return (int)param_3;
}

