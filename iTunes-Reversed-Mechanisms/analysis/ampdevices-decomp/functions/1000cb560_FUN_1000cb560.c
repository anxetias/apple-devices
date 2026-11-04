// name: FUN_1000cb560
// address: 1000cb560

void FUN_1000cb560(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    uVar3 = -(uint)param_1 & 7;
    switch(uVar3) {
    case 7:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 6:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 5:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 4:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 3:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 2:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 1:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    default:
      uVar4 = 0;
      if (uVar3 <= param_3) {
        uVar4 = param_3 - uVar3;
      }
      if (7 < uVar4) {
        uVar5 = (uVar4 >> 3) + 7 >> 3;
        switch((uint)(uVar4 >> 3) & 7) {
        case 1:
          goto switchD_1000a7e06_caseD_1;
        case 2:
          goto switchD_1000a7e06_caseD_2;
        case 3:
          goto switchD_1000a7e06_caseD_3;
        case 4:
          goto switchD_1000a7e06_caseD_4;
        case 5:
          goto switchD_1000a7e06_caseD_5;
        case 6:
          goto switchD_1000a7e06_caseD_6;
        case 7:
          goto switchD_1000a7e06_caseD_7;
        }
        do {
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_7:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_6:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_5:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_4:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_3:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_2:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
switchD_1000a7e06_caseD_1:
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    switch((uint)uVar4 & 7) {
    case 7:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 6:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 5:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 4:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 3:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 2:
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined8 *)((long)param_2 + 1);
    case 1:
      *(undefined1 *)param_2 = *(undefined1 *)param_1;
    }
  }
  else {
    uVar3 = (uint)param_3 + 7;
    if (7 < uVar3) {
      uVar3 = uVar3 >> 3;
      switch((uint)param_3 & 7) {
      case 1:
        goto switchD_1000cb590_caseD_1;
      case 2:
        goto switchD_1000cb590_caseD_2;
      case 3:
        goto switchD_1000cb590_caseD_3;
      case 4:
        goto switchD_1000cb590_caseD_4;
      case 5:
        goto switchD_1000cb590_caseD_5;
      case 6:
        goto switchD_1000cb590_caseD_6;
      case 7:
        goto switchD_1000cb590_caseD_7;
      }
      while( true ) {
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_7:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_6:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_5:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_4:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_3:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_2:
        uVar1 = *(undefined1 *)param_1;
        param_1 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_2 = uVar1;
        param_2 = (undefined8 *)((long)param_2 + 1);
switchD_1000cb590_caseD_1:
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        param_2 = (undefined8 *)((long)param_2 + 1);
        param_1 = (undefined8 *)((long)param_1 + 1);
      }
    }
  }
  return;
}

