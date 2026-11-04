// name: FUN_10016c362
// address: 10016c362

void FUN_10016c362(long param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  runtime_error *prVar9;
  byte bVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long local_58;
  long local_50;
  byte *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  
  local_48 = (byte *)*param_2;
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
  local_50 = 0;
  local_58 = param_1;
  local_38 = param_2;
  if (*local_48 != 0x22) {
                    /* WARNING: Subroutine does not return */
    ___assert_rtn("ParseStringToStream","reader.h",0x2ad,"is.Peek() == \'\\\"\'");
  }
  local_48 = local_48 + 1;
  do {
    while (lVar13 = local_58, bVar10 = *local_48, bVar10 != 0x5c) {
      if (bVar10 == 0x22) {
        local_48 = local_48 + 1;
        puVar7 = *(undefined1 **)(local_58 + 0x18);
        if (*(undefined1 **)(local_58 + 0x20) <= puVar7 + 1) {
          FUN_10016d504(local_58,1);
          puVar7 = *(undefined1 **)(lVar13 + 0x18);
        }
        lVar1 = local_50;
        *(undefined1 **)(lVar13 + 0x18) = puVar7 + 1;
        *puVar7 = 0;
        local_50 = local_50 + 1;
        if (*(int *)(param_1 + 0x30) == 0) {
          uVar8 = FUN_10016d244(&local_58);
          if (param_4 == '\0') {
            cVar2 = FUN_10016d26c(param_3,uVar8,lVar1,1);
          }
          else {
            cVar2 = FUN_10016b07a(param_3,uVar8,lVar1,0);
          }
          if (cVar2 == '\0') {
            prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
            pbVar12 = local_48;
            lVar13 = CONCAT44(uStack_3c,uStack_40);
            std::runtime_error::runtime_error(prVar9,"kParseErrorTermination");
            *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
            *(undefined4 *)(prVar9 + 0x10) = 0x10;
            *(long *)(prVar9 + 0x18) = (long)pbVar12 - lVar13;
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
          }
        }
        *local_38 = local_48;
        local_38[1] = CONCAT44(uStack_3c,uStack_40);
        return;
      }
      if (bVar10 == 0) {
        prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
        pbVar12 = local_48;
        uVar11 = CONCAT44(uStack_3c,uStack_40);
        std::runtime_error::runtime_error(prVar9,"kParseErrorStringMissQuotationMark");
        pbVar12 = pbVar12 + ~uVar11;
        uVar5 = 0xb;
        goto LAB_10016c676;
      }
      if (bVar10 < 0x20) {
        prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
        pbVar12 = local_48;
        uVar11 = CONCAT44(uStack_3c,uStack_40);
        std::runtime_error::runtime_error(prVar9,"kParseErrorStringEscapeInvalid");
        goto LAB_10016c613;
      }
      pbVar12 = local_48 + 1;
      bVar10 = *local_48;
      pbVar6 = *(byte **)(local_58 + 0x18);
      local_48 = pbVar12;
      if (*(byte **)(local_58 + 0x20) <= pbVar6 + 1) {
        FUN_10016d504(local_58,1);
        goto LAB_10016c435;
      }
LAB_10016c439:
      *(byte **)(lVar13 + 0x18) = pbVar6 + 1;
      *pbVar6 = bVar10;
      local_50 = local_50 + 1;
    }
    pbVar12 = local_48 + 2;
    bVar10 = (&DAT_10070d400)[local_48[1]];
    if (bVar10 != 0) {
      pbVar6 = *(byte **)(local_58 + 0x18);
      local_48 = pbVar12;
      if (*(byte **)(local_58 + 0x20) <= pbVar6 + 1) {
        FUN_10016d504(local_58,1);
LAB_10016c435:
        pbVar6 = *(byte **)(lVar13 + 0x18);
      }
      goto LAB_10016c439;
    }
    if (local_48[1] != 0x75) {
      local_48 = pbVar12;
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
      pbVar12 = local_48;
      uVar11 = CONCAT44(uStack_3c,uStack_40);
      std::runtime_error::runtime_error(prVar9,"kParseErrorStringEscapeInvalid");
LAB_10016c613:
      pbVar12 = pbVar12 + ~uVar11;
      uVar5 = 10;
LAB_10016c676:
      *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
      *(undefined4 *)(prVar9 + 0x10) = uVar5;
      *(byte **)(prVar9 + 0x18) = pbVar12;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
    }
    local_48 = pbVar12;
    uVar3 = FUN_10016d2c4(param_1,&local_48);
    if ((uVar3 & 0xfffffc00) == 0xd800) {
      pbVar12 = local_48 + 1;
      if ((*local_48 == 0x5c) && (pbVar12 = local_48 + 2, local_48[1] == 0x75)) {
        local_48 = local_48 + 2;
        iVar4 = FUN_10016d2c4(param_1,&local_48);
        if (0xfffffbff < iVar4 - 0xe000U) {
          uVar3 = uVar3 * 0x400 + iVar4 + 0xfca02400;
          goto LAB_10016c4c1;
        }
        prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
        pbVar12 = local_48;
        lVar13 = CONCAT44(uStack_3c,uStack_40);
        std::runtime_error::runtime_error(prVar9,"kParseErrorStringUnicodeSurrogateInvalid");
      }
      else {
        local_48 = pbVar12;
        prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
        pbVar12 = local_48;
        lVar13 = CONCAT44(uStack_3c,uStack_40);
        std::runtime_error::runtime_error(prVar9,"kParseErrorStringUnicodeSurrogateInvalid");
      }
      pbVar12 = pbVar12 + (-2 - lVar13);
      uVar5 = 9;
      goto LAB_10016c676;
    }
LAB_10016c4c1:
    FUN_10016d376(&local_58,uVar3);
  } while( true );
}

