// name: FUN_100182c9b
// address: 100182c9b

undefined8 FUN_100182c9b(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 < 0x66696c74) {
    if (param_1 < 0x64656c66) {
      if ((param_1 != 0x62656763) && (param_1 != 0x64617461)) {
        if (param_1 != 0x64656c46) {
          return 0xfffffffc;
        }
        uVar1 = FUN_100182d59(*param_2,0);
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x64656c66) {
        uVar1 = FUN_1001892ae(*param_2,0);
        return uVar1;
      }
      if (param_1 != 0x656e6463) {
        if (param_1 != 0x66696c66) {
          return 0xfffffffc;
        }
        *(undefined1 *)(param_2 + 2) = 1;
      }
    }
  }
  else if (param_1 < 0x70726f67) {
    if (param_1 == 0x66696c74) {
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else {
      if (param_1 == 0x6c6f636b) {
        return 0xffffffd3;
      }
      if (param_1 != 0x6e616d65) {
        return 0xfffffffc;
      }
    }
  }
  else if (((param_1 != 0x70726f67) && (param_1 != 0x73747274)) && (param_1 != 0x73746f70)) {
    return 0xfffffffc;
  }
  return 0;
}

