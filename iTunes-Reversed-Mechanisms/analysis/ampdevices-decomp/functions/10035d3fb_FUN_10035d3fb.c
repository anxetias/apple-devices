// name: FUN_10035d3fb
// address: 10035d3fb

undefined8 FUN_10035d3fb(int param_1)

{
  undefined8 uVar1;
  
  if (600 < param_1) {
    if (param_1 < 0x321) {
      if (param_1 == 0x259) {
        return 0x616c6163;
      }
      if (param_1 == 0x25a) {
        return 0x666c6163;
      }
      if (param_1 == 0x2bd) {
        return 0x70636d20;
      }
    }
    else if (param_1 < 0x385) {
      switch(param_1) {
      case 0x321:
        return 0x73616d72;
      case 0x322:
        return 0x696d6134;
      case 0x323:
        return 0x756c6177;
      case 0x324:
        return 0x616c6177;
      }
    }
    else {
      if (param_1 == 0x385) {
        return 0x61633320;
      }
      if (param_1 == 0x386) {
        return 0x65616333;
      }
      if (param_1 == 0x3e9) {
        return 0x75736163;
      }
    }
    goto switchD_10035d42c_caseD_195;
  }
  if (0x1f5 < param_1) {
    if (param_1 - 0x1fcU < 2) {
      return 0x68616163;
    }
    if (param_1 == 0x1f6) {
      return 0x61616320;
    }
    goto switchD_10035d42c_caseD_195;
  }
  switch(param_1) {
  case 0x192:
    uVar1 = 0x61613220;
    break;
  case 0x193:
    uVar1 = 0x61613320;
    break;
  case 0x194:
    uVar1 = 0x61613420;
    break;
  case 0x196:
    uVar1 = 0x61617820;
    break;
  default:
    if (param_1 - 0x12dU < 3) {
      return 0x6d703320;
    }
  case 0x195:
switchD_10035d42c_caseD_195:
    uVar1 = 0;
  }
  return uVar1;
}

