// name: FUN_1001e7b1b
// address: 1001e7b1b

undefined1 FUN_1001e7b1b(ushort param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0x10;
  if (0x1f < param_1) {
    if (DAT_1008a29d4 == '\0') {
      DAT_1008a29d8 = _CFCharacterSetGetPredefined(1);
      DAT_1008a29e0 = _CFCharacterSetGetPredefined(4);
      DAT_1008a29e8 = _CFCharacterSetGetPredefined(0xc);
      DAT_1008a29f0 = _CFCharacterSetGetPredefined(0xb);
      DAT_1008a29f8 = _CFCharacterSetGetPredefined(3);
      DAT_1008a2a00 = _CFCharacterSetGetPredefined(0xe);
      DAT_1008a29d4 = '\x01';
    }
    cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a29d8,param_1);
    if (cVar1 == '\0') {
      cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a29e0,param_1);
      uVar2 = 2;
      if (cVar1 == '\0') {
        cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a29f0,param_1);
        uVar2 = 4;
        if (cVar1 == '\0') {
          cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a2a00,param_1);
          if (cVar1 == '\0') {
            cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a29f8,param_1);
            uVar2 = 8;
            if (cVar1 == '\0') {
              cVar1 = _CFCharacterSetIsCharacterMember(DAT_1008a29e8,param_1);
              uVar2 = cVar1 == '\0';
            }
          }
        }
      }
    }
  }
  return uVar2;
}

