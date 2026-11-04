// rea decompile_all
// name: std::stringbuf::overflow
// address: 0x2209d6
// body: available
// range: 0x2209d6-0x220b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::stringbuf::overflow(int) */

ulong __thiscall std::stringbuf::overflow(stringbuf *this,int param_1)

{
  stringbuf *psVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  stringbuf *psVar6;
  ulong uVar7;
  stringbuf *psVar8;
  char cVar9;
  stringbuf *psVar10;
  stringbuf *psVar11;
  uint uVar12;
  
  if (param_1 == -1) {
    uVar12 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0x18);
    psVar10 = *(stringbuf **)(this + 0x30);
    lVar3 = *(long *)(this + 0x10);
    psVar6 = *(stringbuf **)(this + 0x38);
    if (psVar10 == psVar6) {
      uVar12 = 0xffffffff;
      if (((byte)this[0x60] & 0x10) == 0) goto LAB_00220ae4;
      lVar4 = *(long *)(this + 0x28);
      lVar5 = *(long *)(this + 0x58);
      psVar6 = this + 0x40;
      std::string::push_back((char)psVar6);
      cVar9 = '\x16';
      if (((byte)*psVar6 & 1) != 0) {
        cVar9 = ((byte)*(undefined8 *)psVar6 & 0xfe) - 1;
      }
      std::string::resize((ulong)psVar6,cVar9);
      if (((byte)*psVar6 & 1) == 0) {
        psVar11 = this + 0x41;
        uVar7 = (ulong)((byte)*psVar6 >> 1);
      }
      else {
        uVar7 = *(ulong *)(this + 0x48);
        psVar11 = *(stringbuf **)(this + 0x50);
      }
      psVar6 = psVar11 + uVar7;
      *(stringbuf **)(this + 0x28) = psVar11;
      *(stringbuf **)(this + 0x38) = psVar6;
      psVar10 = psVar11 + ((long)psVar10 - lVar4);
      *(stringbuf **)(this + 0x30) = psVar10;
      psVar11 = psVar11 + (lVar5 - lVar4);
    }
    else {
      psVar11 = *(stringbuf **)(this + 0x58);
    }
    psVar1 = psVar10 + 1;
    if (psVar11 <= psVar1) {
      psVar11 = psVar1;
    }
    *(stringbuf **)(this + 0x58) = psVar11;
    if (((byte)this[0x60] & 8) != 0) {
      if (((byte)this[0x40] & 1) == 0) {
        psVar8 = this + 0x41;
      }
      else {
        psVar8 = *(stringbuf **)(this + 0x50);
      }
      *(stringbuf **)(this + 0x10) = psVar8;
      *(stringbuf **)(this + 0x18) = psVar8 + (lVar2 - lVar3);
      *(stringbuf **)(this + 0x20) = psVar11;
    }
    if (psVar10 == psVar6) {
                    /* WARNING: Could not recover jumptable at 0x00220b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
      return uVar7;
    }
    *(stringbuf **)(this + 0x30) = psVar1;
    *psVar10 = SUB41(param_1,0);
    uVar12 = param_1 & 0xff;
  }
LAB_00220ae4:
  return (ulong)uVar12;
}

