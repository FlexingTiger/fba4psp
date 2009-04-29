// --- Op Funcs ---------------------------------

// NOP
static void Op____(unsigned short /*opcode*/)
{
}

// STC SR,Rn
static void Op0002(unsigned short opcode)
{
	sh2->r[0] = sh2->sr;
}

static void Op0102(unsigned short opcode)
{
	sh2->r[1] = sh2->sr;
}

static void Op0202(unsigned short opcode)
{
	sh2->r[2] = sh2->sr;
}

static void Op0302(unsigned short opcode)
{
	sh2->r[3] = sh2->sr;
}

static void Op0402(unsigned short opcode)
{
	sh2->r[4] = sh2->sr;
}

static void Op0502(unsigned short opcode)
{
	sh2->r[5] = sh2->sr;
}

static void Op0602(unsigned short opcode)
{
	sh2->r[6] = sh2->sr;
}

static void Op0702(unsigned short opcode)
{
	sh2->r[7] = sh2->sr;
}

static void Op0802(unsigned short opcode)
{
	sh2->r[8] = sh2->sr;
}

static void Op0902(unsigned short opcode)
{
	sh2->r[9] = sh2->sr;
}

static void Op0A02(unsigned short opcode)
{
	sh2->r[10] = sh2->sr;
}

static void Op0B02(unsigned short opcode)
{
	sh2->r[11] = sh2->sr;
}

static void Op0C02(unsigned short opcode)
{
	sh2->r[12] = sh2->sr;
}

static void Op0D02(unsigned short opcode)
{
	sh2->r[13] = sh2->sr;
}

static void Op0E02(unsigned short opcode)
{
	sh2->r[14] = sh2->sr;
}

static void Op0F02(unsigned short opcode)
{
	sh2->r[15] = sh2->sr;
}

// BSRF Rn
static void Op0003(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[0] + 2;
	sh2->sh2_icount--;
}

static void Op0103(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[1] + 2;
	sh2->sh2_icount--;
}

static void Op0203(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[2] + 2;
	sh2->sh2_icount--;
}

static void Op0303(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[3] + 2;
	sh2->sh2_icount--;
}

static void Op0403(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[4] + 2;
	sh2->sh2_icount--;
}

static void Op0503(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[5] + 2;
	sh2->sh2_icount--;
}

static void Op0603(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[6] + 2;
	sh2->sh2_icount--;
}

static void Op0703(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[7] + 2;
	sh2->sh2_icount--;
}

static void Op0803(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[8] + 2;
	sh2->sh2_icount--;
}

static void Op0903(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[9] + 2;
	sh2->sh2_icount--;
}

static void Op0A03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[10] + 2;
	sh2->sh2_icount--;
}

static void Op0B03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[11] + 2;
	sh2->sh2_icount--;
}

static void Op0C03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[12] + 2;
	sh2->sh2_icount--;
}

static void Op0D03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[13] + 2;
	sh2->sh2_icount--;
}

static void Op0E03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[14] + 2;
	sh2->sh2_icount--;
}

static void Op0F03(unsigned short opcode)
{
	sh2->pr = sh2->pc + 2;
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[15] + 2;
	sh2->sh2_icount--;
}

// MOV.B Rm,@(R0,Rn)
static void Op0004(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0014(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0024(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0034(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0044(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0054(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0064(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0074(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0084(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0094(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op00A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op00B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op00C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op00D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op00E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op00F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0104(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0114(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0124(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0134(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0144(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0154(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0164(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0174(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0184(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0194(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op01A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op01B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op01C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op01D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op01E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op01F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0204(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0214(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0224(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0234(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0244(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0254(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0264(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0274(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0284(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0294(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op02A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op02B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op02C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op02D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op02E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op02F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0304(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0314(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0324(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0334(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0344(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0354(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0364(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0374(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0384(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0394(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op03A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op03B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op03C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op03D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op03E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op03F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0404(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0414(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0424(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0434(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0444(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0454(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0464(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0474(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0484(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0494(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op04A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op04B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op04C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op04D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op04E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op04F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0504(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0514(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0524(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0534(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0544(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0554(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0564(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0574(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0584(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0594(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op05A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op05B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op05C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op05D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op05E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op05F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0604(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0614(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0624(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0634(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0644(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0654(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0664(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0674(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0684(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0694(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op06A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op06B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op06C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op06D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op06E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op06F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0704(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0714(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0724(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0734(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0744(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0754(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0764(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0774(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0784(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0794(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op07A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op07B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op07C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op07D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op07E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op07F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0804(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0814(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0824(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0834(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0844(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0854(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0864(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0874(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0884(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0894(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op08A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op08B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op08C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op08D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op08E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op08F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0904(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0914(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0924(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0934(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0944(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0954(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0964(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0974(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0984(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0994(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op09A4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op09B4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op09C4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op09D4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op09E4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op09F4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0A04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0A14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0A24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0A34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0A44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0A54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0A64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0A74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0A84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0A94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0AA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0AB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0AC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0AD4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0AE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0AF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0B04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0B14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0B24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0B34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0B44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0B54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0B64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0B74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0B84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0B94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0BA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0BB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0BC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0BD4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0BE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0BF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0C04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0C14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0C24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0C34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0C44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0C54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0C64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0C74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0C84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0C94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0CA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0CB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0CC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0CD4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0CE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0CF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0D04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0D14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0D24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0D34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0D44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0D54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0D64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0D74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0D84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0D94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0DA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0DB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0DC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0DD4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0DE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0DF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0E04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0E14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0E24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0E34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0E44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0E54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0E64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0E74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0E84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0E94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0EA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0EB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0EC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0ED4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0EE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0EF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

static void Op0F04(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff );
}

static void Op0F14(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff );
}

static void Op0F24(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff );
}

static void Op0F34(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff );
}

static void Op0F44(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff );
}

static void Op0F54(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff );
}

static void Op0F64(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff );
}

static void Op0F74(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff );
}

static void Op0F84(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff );
}

static void Op0F94(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff );
}

static void Op0FA4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff );
}

static void Op0FB4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff );
}

static void Op0FC4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff );
}

static void Op0FD4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff );
}

static void Op0FE4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff );
}

static void Op0FF4(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff );
}

// MOV.W Rm,@(R0,Rn)
static void Op0005(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0015(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0025(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0035(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0045(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0055(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0065(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0075(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0085(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0095(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op00A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op00B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op00C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op00D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op00E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op00F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0105(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0115(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0125(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0135(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0145(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0155(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0165(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0175(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0185(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0195(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op01A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op01B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op01C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op01D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op01E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op01F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0205(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0215(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0225(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0235(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0245(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0255(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0265(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0275(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0285(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0295(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op02A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op02B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op02C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op02D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op02E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op02F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0305(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0315(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0325(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0335(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0345(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0355(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0365(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0375(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0385(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0395(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op03A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op03B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op03C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op03D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op03E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op03F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0405(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0415(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0425(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0435(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0445(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0455(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0465(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0475(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0485(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0495(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op04A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op04B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op04C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op04D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op04E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op04F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0505(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0515(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0525(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0535(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0545(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0555(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0565(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0575(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0585(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0595(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op05A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op05B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op05C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op05D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op05E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op05F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0605(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0615(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0625(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0635(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0645(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0655(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0665(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0675(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0685(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0695(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op06A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op06B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op06C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op06D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op06E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op06F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0705(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0715(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0725(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0735(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0745(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0755(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0765(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0775(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0785(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0795(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op07A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op07B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op07C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op07D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op07E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op07F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0805(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0815(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0825(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0835(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0845(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0855(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0865(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0875(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0885(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0895(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op08A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op08B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op08C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op08D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op08E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op08F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0905(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0915(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0925(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0935(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0945(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0955(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0965(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0975(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0985(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0995(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op09A5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op09B5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op09C5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op09D5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op09E5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op09F5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0A05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0A15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0A25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0A35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0A45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0A55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0A65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0A75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0A85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0A95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0AA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0AB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0AC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0AD5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0AE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0AF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0B05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0B15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0B25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0B35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0B45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0B55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0B65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0B75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0B85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0B95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0BA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0BB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0BC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0BD5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0BE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0BF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0C05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0C15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0C25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0C35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0C45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0C55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0C65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0C75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0C85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0C95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0CA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0CB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0CC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0CD5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0CE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0CF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0D05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0D15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0D25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0D35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0D45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0D55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0D65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0D75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0D85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0D95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0DA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0DB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0DC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0DD5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0DE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0DF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0E05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0E15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0E25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0E35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0E45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0E55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0E65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0E75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0E85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0E95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0EA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0EB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0EC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0ED5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0EE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0EF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

static void Op0F05(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff );
}

static void Op0F15(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff );
}

static void Op0F25(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff );
}

static void Op0F35(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff );
}

static void Op0F45(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff );
}

static void Op0F55(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff );
}

static void Op0F65(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff );
}

static void Op0F75(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff );
}

static void Op0F85(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff );
}

static void Op0F95(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff );
}

static void Op0FA5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff );
}

static void Op0FB5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff );
}

static void Op0FC5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff );
}

static void Op0FD5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff );
}

static void Op0FE5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff );
}

static void Op0FF5(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff );
}

// MOV.L Rm,@(R0,Rn)
static void Op0006(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0016(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0026(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0036(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0046(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0056(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0066(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0076(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0086(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0096(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op00A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op00B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op00C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op00D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op00E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op00F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0106(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0116(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0126(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0136(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0146(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0156(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0166(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0176(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0186(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0196(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op01A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op01B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op01C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op01D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op01E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op01F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0206(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0216(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0226(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0236(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0246(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0256(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0266(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0276(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0286(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0296(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op02A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op02B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op02C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op02D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op02E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op02F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0306(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0316(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0326(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0336(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0346(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0356(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0366(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0376(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0386(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0396(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op03A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op03B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op03C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op03D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op03E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op03F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0406(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0416(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0426(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0436(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0446(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0456(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0466(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0476(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0486(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0496(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op04A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op04B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op04C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op04D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op04E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op04F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0506(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0516(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0526(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0536(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0546(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0556(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0566(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0576(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0586(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0596(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op05A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op05B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op05C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op05D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op05E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op05F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0606(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0616(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0626(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0636(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0646(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0656(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0666(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0676(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0686(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0696(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op06A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op06B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op06C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op06D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op06E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op06F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0706(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0716(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0726(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0736(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0746(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0756(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0766(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0776(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0786(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0796(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op07A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op07B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op07C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op07D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op07E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op07F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0806(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0816(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0826(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0836(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0846(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0856(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0866(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0876(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0886(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0896(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op08A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op08B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op08C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op08D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op08E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op08F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0906(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0916(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0926(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0936(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0946(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0956(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0966(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0976(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0986(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0996(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op09A6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op09B6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op09C6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op09D6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op09E6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op09F6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0A06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0A16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0A26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0A36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0A46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0A56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0A66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0A76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0A86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0A96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0AA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0AB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0AC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0AD6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0AE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0AF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0B06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0B16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0B26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0B36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0B46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0B56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0B66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0B76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0B86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0B96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0BA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0BB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0BC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0BD6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0BE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0BF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0C06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0C16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0C26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0C36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0C46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0C56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0C66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0C76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0C86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0C96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0CA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0CB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0CC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0CD6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0CE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0CF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0D06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0D16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0D26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0D36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0D46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0D56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0D66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0D76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0D86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0D96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0DA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0DB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0DC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0DD6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0DE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0DF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0E06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0E16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0E26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0E36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0E46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0E56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0E66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0E76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0E86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0E96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0EA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0EB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0EC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0ED6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0EE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0EF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op0F06(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op0F16(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op0F26(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op0F36(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op0F46(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op0F56(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op0F66(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op0F76(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op0F86(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op0F96(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op0FA6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op0FB6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op0FC6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op0FD6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op0FE6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op0FF6(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

// MUL.L Rm,Rn
static void Op0007(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0017(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0027(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0037(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0047(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0057(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0067(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0077(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0087(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0097(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op00A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op00B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op00C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op00D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op00E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op00F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[0] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0107(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0117(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0127(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0137(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0147(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0157(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0167(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0177(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0187(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0197(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op01A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op01B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op01C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op01D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op01E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op01F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[1] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0207(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0217(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0227(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0237(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0247(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0257(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0267(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0277(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0287(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0297(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op02A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op02B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op02C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op02D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op02E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op02F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[2] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0307(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0317(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0327(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0337(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0347(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0357(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0367(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0377(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0387(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0397(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op03A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op03B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op03C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op03D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op03E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op03F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[3] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0407(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0417(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0427(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0437(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0447(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0457(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0467(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0477(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0487(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0497(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op04A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op04B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op04C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op04D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op04E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op04F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[4] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0507(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0517(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0527(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0537(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0547(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0557(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0567(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0577(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0587(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0597(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op05A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op05B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op05C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op05D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op05E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op05F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[5] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0607(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0617(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0627(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0637(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0647(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0657(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0667(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0677(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0687(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0697(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op06A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op06B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op06C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op06D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op06E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op06F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[6] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0707(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0717(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0727(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0737(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0747(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0757(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0767(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0777(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0787(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0797(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op07A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op07B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op07C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op07D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op07E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op07F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[7] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0807(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0817(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0827(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0837(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0847(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0857(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0867(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0877(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0887(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0897(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op08A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op08B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op08C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op08D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op08E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op08F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[8] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0907(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0917(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0927(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0937(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0947(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0957(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0967(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0977(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0987(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0997(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op09A7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op09B7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op09C7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op09D7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op09E7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op09F7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[9] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0A07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0A17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0A27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0A37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0A47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0A57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0A67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0A77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0A87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0A97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0AA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0AB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0AC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0AD7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0AE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0AF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[10] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0B07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0B17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0B27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0B37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0B47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0B57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0B67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0B77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0B87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0B97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0BA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0BB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0BC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0BD7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0BE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0BF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[11] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0C07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0C17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0C27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0C37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0C47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0C57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0C67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0C77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0C87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0C97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0CA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0CB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0CC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0CD7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0CE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0CF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[12] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0D07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0D17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0D27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0D37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0D47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0D57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0D67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0D77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0D87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0D97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0DA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0DB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0DC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0DD7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0DE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0DF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[13] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0E07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0E17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0E27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0E37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0E47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0E57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0E67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0E77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0E87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0E97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0EA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0EB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0EC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0ED7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0EE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0EF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[14] * sh2->r[15];
	sh2->sh2_icount--;
}

static void Op0F07(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[0];
	sh2->sh2_icount--;
}

static void Op0F17(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[1];
	sh2->sh2_icount--;
}

static void Op0F27(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[2];
	sh2->sh2_icount--;
}

static void Op0F37(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[3];
	sh2->sh2_icount--;
}

static void Op0F47(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[4];
	sh2->sh2_icount--;
}

static void Op0F57(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[5];
	sh2->sh2_icount--;
}

static void Op0F67(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[6];
	sh2->sh2_icount--;
}

static void Op0F77(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[7];
	sh2->sh2_icount--;
}

static void Op0F87(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[8];
	sh2->sh2_icount--;
}

static void Op0F97(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[9];
	sh2->sh2_icount--;
}

static void Op0FA7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[10];
	sh2->sh2_icount--;
}

static void Op0FB7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[11];
	sh2->sh2_icount--;
}

static void Op0FC7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[12];
	sh2->sh2_icount--;
}

static void Op0FD7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[13];
	sh2->sh2_icount--;
}

static void Op0FE7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[14];
	sh2->sh2_icount--;
}

static void Op0FF7(unsigned short /*opcode*/)
{
	sh2->macl = sh2->r[15] * sh2->r[15];
	sh2->sh2_icount--;
}

// CLRT
static void Op0008(unsigned short opcode)
{
	sh2->sr &= ~T;
}

// STS MACH,Rn
static void Op000A(unsigned short opcode)
{
	sh2->r[0] = sh2->mach;
}

static void Op010A(unsigned short opcode)
{
	sh2->r[1] = sh2->mach;
}

static void Op020A(unsigned short opcode)
{
	sh2->r[2] = sh2->mach;
}

static void Op030A(unsigned short opcode)
{
	sh2->r[3] = sh2->mach;
}

static void Op040A(unsigned short opcode)
{
	sh2->r[4] = sh2->mach;
}

static void Op050A(unsigned short opcode)
{
	sh2->r[5] = sh2->mach;
}

static void Op060A(unsigned short opcode)
{
	sh2->r[6] = sh2->mach;
}

static void Op070A(unsigned short opcode)
{
	sh2->r[7] = sh2->mach;
}

static void Op080A(unsigned short opcode)
{
	sh2->r[8] = sh2->mach;
}

static void Op090A(unsigned short opcode)
{
	sh2->r[9] = sh2->mach;
}

static void Op0A0A(unsigned short opcode)
{
	sh2->r[10] = sh2->mach;
}

static void Op0B0A(unsigned short opcode)
{
	sh2->r[11] = sh2->mach;
}

static void Op0C0A(unsigned short opcode)
{
	sh2->r[12] = sh2->mach;
}

static void Op0D0A(unsigned short opcode)
{
	sh2->r[13] = sh2->mach;
}

static void Op0E0A(unsigned short opcode)
{
	sh2->r[14] = sh2->mach;
}

static void Op0F0A(unsigned short opcode)
{
	sh2->r[15] = sh2->mach;
}

// RTS
static void Op000B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->pr;
	sh2->sh2_icount--;
}

// MOV.B @(R0,Rm),Rn
static void Op000C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op001C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op002C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op003C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op004C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op005C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op006C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op007C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op008C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op009C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op00FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op010C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op011C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op012C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op013C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op014C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op015C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op016C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op017C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op018C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op019C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op01FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op020C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op021C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op022C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op023C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op024C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op025C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op026C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op027C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op028C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op029C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op02FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op030C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op031C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op032C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op033C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op034C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op035C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op036C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op037C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op038C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op039C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op03FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op040C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op041C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op042C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op043C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op044C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op045C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op046C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op047C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op048C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op049C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op04FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op050C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op051C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op052C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op053C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op054C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op055C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op056C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op057C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op058C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op059C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op05FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op060C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op061C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op062C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op063C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op064C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op065C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op066C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op067C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op068C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op069C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op06FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op070C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op071C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op072C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op073C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op074C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op075C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op076C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op077C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op078C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op079C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op07FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op080C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op081C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op082C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op083C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op084C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op085C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op086C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op087C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op088C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op089C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op08FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op090C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op091C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op092C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op093C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op094C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op095C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op096C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op097C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op098C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op099C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09AC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09BC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09CC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09DC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09EC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op09FC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0A9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0AAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0ABC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0ACC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0ADC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0AEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0AFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0B9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BBC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BCC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BDC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0BFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0C9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CBC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CCC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CDC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0CFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0D9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DBC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DCC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DDC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0DFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0E9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0EAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0EBC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0ECC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0EDC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0EEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0EFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F0C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F1C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F2C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F3C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F4C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F5C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F6C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F7C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F8C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0F9C(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FAC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FBC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FCC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FDC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FEC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op0FFC(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

// MOV.W @(R0,Rm),Rn
static void Op000D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op001D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op002D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op003D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op004D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op005D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op006D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op007D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op008D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op009D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op00FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op010D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op011D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op012D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op013D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op014D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op015D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op016D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op017D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op018D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op019D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op01FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op020D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op021D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op022D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op023D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op024D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op025D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op026D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op027D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op028D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op029D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op02FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op030D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op031D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op032D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op033D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op034D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op035D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op036D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op037D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op038D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op039D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op03FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op040D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op041D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op042D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op043D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op044D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op045D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op046D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op047D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op048D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op049D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op04FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op050D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op051D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op052D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op053D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op054D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op055D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op056D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op057D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op058D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op059D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op05FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op060D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op061D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op062D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op063D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op064D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op065D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op066D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op067D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op068D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op069D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op06FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op070D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op071D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op072D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op073D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op074D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op075D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op076D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op077D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op078D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op079D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op07FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op080D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op081D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op082D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op083D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op084D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op085D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op086D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op087D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op088D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op089D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op08FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op090D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op091D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op092D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op093D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op094D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op095D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op096D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op097D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op098D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op099D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09AD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09BD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09CD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09DD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09ED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op09FD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0A9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0AAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0ABD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0ACD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0ADD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0AED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0AFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0B9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BBD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BCD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BDD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0BFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0C9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CBD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CCD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CDD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0CFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0D9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DBD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DCD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DDD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0DFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0E9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0EAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0EBD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0ECD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0EDD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0EED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0EFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F0D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F1D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F2D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F3D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F4D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F5D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F6D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F7D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F8D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0F9D(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FAD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FBD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FCD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FDD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FED(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op0FFD(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

// MOV.L @(R0,Rm),Rn
static void Op000E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op001E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op002E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op003E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op004E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op005E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op006E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op007E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op008E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op009E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op00FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op010E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op011E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op012E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op013E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op014E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op015E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op016E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op017E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op018E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op019E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op01FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op020E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op021E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op022E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op023E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op024E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op025E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op026E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op027E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op028E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op029E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op02FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op030E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op031E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op032E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op033E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op034E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op035E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op036E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op037E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op038E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op039E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op03FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op040E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op041E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op042E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op043E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op044E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op045E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op046E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op047E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op048E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op049E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op04FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op050E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op051E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op052E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op053E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op054E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op055E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op056E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op057E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op058E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op059E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op05FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op060E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op061E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op062E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op063E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op064E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op065E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op066E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op067E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op068E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op069E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op06FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op070E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op071E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op072E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op073E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op074E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op075E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op076E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op077E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op078E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op079E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op07FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[7] = RL( sh2->ea );
}

static void Op080E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op081E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op082E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op083E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op084E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op085E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op086E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op087E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op088E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op089E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op08FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[8] = RL( sh2->ea );
}

static void Op090E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op091E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op092E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op093E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op094E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op095E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op096E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op097E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op098E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op099E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09AE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09BE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09CE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09DE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09EE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op09FE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[9] = RL( sh2->ea );
}

static void Op0A0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0A9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0AAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0ABE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0ACE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0ADE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0AEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0AFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[10] = RL( sh2->ea );
}

static void Op0B0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0B9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BBE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BCE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BDE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0BFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[11] = RL( sh2->ea );
}

static void Op0C0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0C9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CBE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CCE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CDE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0CFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[12] = RL( sh2->ea );
}

static void Op0D0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0D9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DBE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DCE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DDE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0DFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[13] = RL( sh2->ea );
}

static void Op0E0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0E9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0EAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0EBE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0ECE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0EDE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0EEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0EFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[14] = RL( sh2->ea );
}

static void Op0F0E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F1E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F2E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F3E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F4E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F5E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F6E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F7E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F8E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0F9E(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FAE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FBE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FCE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FDE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FEE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

static void Op0FFE(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15] + sh2->r[0];
	sh2->r[15] = RL( sh2->ea );
}

// MAC.L @Rm+,@Rn+
static void Op000F(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 RnL, RnH, RmL, RmH, Res0, Res1, Res2;
	UINT32 temp0, temp1, temp2, temp3;
	INT32 tempm, tempn, fnLmL;

	tempn = (INT32) RL( sh2->r[n] );
	sh2->r[n] += 4;
	tempm = (INT32) RL( sh2->r[m] );
	sh2->r[m] += 4;
	if ((INT32) (tempn ^ tempm) < 0)
		fnLmL = -1;
	else
		fnLmL = 0;
	if (tempn < 0)
		tempn = 0 - tempn;
	if (tempm < 0)
		tempm = 0 - tempm;
	temp1 = (UINT32) tempn;
	temp2 = (UINT32) tempm;
	RnL = temp1 & 0x0000ffff;
	RnH = (temp1 >> 16) & 0x0000ffff;
	RmL = temp2 & 0x0000ffff;
	RmH = (temp2 >> 16) & 0x0000ffff;
	temp0 = RmL * RnL;
	temp1 = RmH * RnL;
	temp2 = RmL * RnH;
	temp3 = RmH * RnH;
	Res2 = 0;
	Res1 = temp1 + temp2;
	if (Res1 < temp1)
		Res2 += 0x00010000;
	temp1 = (Res1 << 16) & 0xffff0000;
	Res0 = temp0 + temp1;
	if (Res0 < temp0)
		Res2++;
	Res2 = Res2 + ((Res1 >> 16) & 0x0000ffff) + temp3;
	if (fnLmL < 0)
	{
		Res2 = ~Res2;
		if (Res0 == 0)
			Res2++;
		else
			Res0 = (~Res0) + 1;
	}
	if (sh2->sr & S)
	{
		Res0 = sh2->macl + Res0;
		if (sh2->macl > Res0)
			Res2++;
		Res2 += (sh2->mach & 0x0000ffff);
		if (((INT32) Res2 < 0) && (Res2 < 0xffff8000))
		{
			Res2 = 0x00008000;
			Res0 = 0x00000000;
		}
		else if (((INT32) Res2 > 0) && (Res2 > 0x00007fff))
		{
			Res2 = 0x00007fff;
			Res0 = 0xffffffff;
		}
		sh2->mach = Res2;
		sh2->macl = Res0;
	}
	else
	{
		Res0 = sh2->macl + Res0;
		if (sh2->macl > Res0)
			Res2++;
		Res2 += sh2->mach;
		sh2->mach = Res2;
		sh2->macl = Res0;
	}
	sh2->sh2_icount -= 2;
}

// STC GBR,Rn
static void Op0012(unsigned short opcode)
{
	sh2->r[0] = sh2->gbr;
}

static void Op0112(unsigned short opcode)
{
	sh2->r[1] = sh2->gbr;
}

static void Op0212(unsigned short opcode)
{
	sh2->r[2] = sh2->gbr;
}

static void Op0312(unsigned short opcode)
{
	sh2->r[3] = sh2->gbr;
}

static void Op0412(unsigned short opcode)
{
	sh2->r[4] = sh2->gbr;
}

static void Op0512(unsigned short opcode)
{
	sh2->r[5] = sh2->gbr;
}

static void Op0612(unsigned short opcode)
{
	sh2->r[6] = sh2->gbr;
}

static void Op0712(unsigned short opcode)
{
	sh2->r[7] = sh2->gbr;
}

static void Op0812(unsigned short opcode)
{
	sh2->r[8] = sh2->gbr;
}

static void Op0912(unsigned short opcode)
{
	sh2->r[9] = sh2->gbr;
}

static void Op0A12(unsigned short opcode)
{
	sh2->r[10] = sh2->gbr;
}

static void Op0B12(unsigned short opcode)
{
	sh2->r[11] = sh2->gbr;
}

static void Op0C12(unsigned short opcode)
{
	sh2->r[12] = sh2->gbr;
}

static void Op0D12(unsigned short opcode)
{
	sh2->r[13] = sh2->gbr;
}

static void Op0E12(unsigned short opcode)
{
	sh2->r[14] = sh2->gbr;
}

static void Op0F12(unsigned short opcode)
{
	sh2->r[15] = sh2->gbr;
}

// SETT
static void Op0018(unsigned short opcode)
{
	sh2->sr |= T;
}

// DIV0U
static void Op0019(unsigned short opcode)
{
	sh2->sr &= ~(M | Q | T);
}

// STS MACL,Rn
static void Op001A(unsigned short opcode)
{
	sh2->r[0] = sh2->macl;
}

static void Op011A(unsigned short opcode)
{
	sh2->r[1] = sh2->macl;
}

static void Op021A(unsigned short opcode)
{
	sh2->r[2] = sh2->macl;
}

static void Op031A(unsigned short opcode)
{
	sh2->r[3] = sh2->macl;
}

static void Op041A(unsigned short opcode)
{
	sh2->r[4] = sh2->macl;
}

static void Op051A(unsigned short opcode)
{
	sh2->r[5] = sh2->macl;
}

static void Op061A(unsigned short opcode)
{
	sh2->r[6] = sh2->macl;
}

static void Op071A(unsigned short opcode)
{
	sh2->r[7] = sh2->macl;
}

static void Op081A(unsigned short opcode)
{
	sh2->r[8] = sh2->macl;
}

static void Op091A(unsigned short opcode)
{
	sh2->r[9] = sh2->macl;
}

static void Op0A1A(unsigned short opcode)
{
	sh2->r[10] = sh2->macl;
}

static void Op0B1A(unsigned short opcode)
{
	sh2->r[11] = sh2->macl;
}

static void Op0C1A(unsigned short opcode)
{
	sh2->r[12] = sh2->macl;
}

static void Op0D1A(unsigned short opcode)
{
	sh2->r[13] = sh2->macl;
}

static void Op0E1A(unsigned short opcode)
{
	sh2->r[14] = sh2->macl;
}

static void Op0F1A(unsigned short opcode)
{
	sh2->r[15] = sh2->macl;
}

// SLEEP
static void Op001B(unsigned short opcode)
{
	sh2->pc -= 2;
	sh2->sh2_icount -= 2;
}

// STC VBR,Rn
static void Op0022(unsigned short opcode)
{
	sh2->r[0] = sh2->vbr;
}

static void Op0122(unsigned short opcode)
{
	sh2->r[1] = sh2->vbr;
}

static void Op0222(unsigned short opcode)
{
	sh2->r[2] = sh2->vbr;
}

static void Op0322(unsigned short opcode)
{
	sh2->r[3] = sh2->vbr;
}

static void Op0422(unsigned short opcode)
{
	sh2->r[4] = sh2->vbr;
}

static void Op0522(unsigned short opcode)
{
	sh2->r[5] = sh2->vbr;
}

static void Op0622(unsigned short opcode)
{
	sh2->r[6] = sh2->vbr;
}

static void Op0722(unsigned short opcode)
{
	sh2->r[7] = sh2->vbr;
}

static void Op0822(unsigned short opcode)
{
	sh2->r[8] = sh2->vbr;
}

static void Op0922(unsigned short opcode)
{
	sh2->r[9] = sh2->vbr;
}

static void Op0A22(unsigned short opcode)
{
	sh2->r[10] = sh2->vbr;
}

static void Op0B22(unsigned short opcode)
{
	sh2->r[11] = sh2->vbr;
}

static void Op0C22(unsigned short opcode)
{
	sh2->r[12] = sh2->vbr;
}

static void Op0D22(unsigned short opcode)
{
	sh2->r[13] = sh2->vbr;
}

static void Op0E22(unsigned short opcode)
{
	sh2->r[14] = sh2->vbr;
}

static void Op0F22(unsigned short opcode)
{
	sh2->r[15] = sh2->vbr;
}

// BRAF Rn
static void Op0023(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[0] + 2;
	sh2->sh2_icount--;
}

static void Op0123(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[1] + 2;
	sh2->sh2_icount--;
}

static void Op0223(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[2] + 2;
	sh2->sh2_icount--;
}

static void Op0323(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[3] + 2;
	sh2->sh2_icount--;
}

static void Op0423(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[4] + 2;
	sh2->sh2_icount--;
}

static void Op0523(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[5] + 2;
	sh2->sh2_icount--;
}

static void Op0623(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[6] + 2;
	sh2->sh2_icount--;
}

static void Op0723(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[7] + 2;
	sh2->sh2_icount--;
}

static void Op0823(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[8] + 2;
	sh2->sh2_icount--;
}

static void Op0923(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[9] + 2;
	sh2->sh2_icount--;
}

static void Op0A23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[10] + 2;
	sh2->sh2_icount--;
}

static void Op0B23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[11] + 2;
	sh2->sh2_icount--;
}

static void Op0C23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[12] + 2;
	sh2->sh2_icount--;
}

static void Op0D23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[13] + 2;
	sh2->sh2_icount--;
}

static void Op0E23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[14] + 2;
	sh2->sh2_icount--;
}

static void Op0F23(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc += sh2->r[15] + 2;
	sh2->sh2_icount--;
}

// CLRMAC
static void Op0028(unsigned short opcode)
{
	sh2->mach = 0;
	sh2->macl = 0;
}

// MOVT Rn
static void Op0029(unsigned short opcode)
{
	sh2->r[0] = sh2->sr & T;
}

static void Op0129(unsigned short opcode)
{
	sh2->r[1] = sh2->sr & T;
}

static void Op0229(unsigned short opcode)
{
	sh2->r[2] = sh2->sr & T;
}

static void Op0329(unsigned short opcode)
{
	sh2->r[3] = sh2->sr & T;
}

static void Op0429(unsigned short opcode)
{
	sh2->r[4] = sh2->sr & T;
}

static void Op0529(unsigned short opcode)
{
	sh2->r[5] = sh2->sr & T;
}

static void Op0629(unsigned short opcode)
{
	sh2->r[6] = sh2->sr & T;
}

static void Op0729(unsigned short opcode)
{
	sh2->r[7] = sh2->sr & T;
}

static void Op0829(unsigned short opcode)
{
	sh2->r[8] = sh2->sr & T;
}

static void Op0929(unsigned short opcode)
{
	sh2->r[9] = sh2->sr & T;
}

static void Op0A29(unsigned short opcode)
{
	sh2->r[10] = sh2->sr & T;
}

static void Op0B29(unsigned short opcode)
{
	sh2->r[11] = sh2->sr & T;
}

static void Op0C29(unsigned short opcode)
{
	sh2->r[12] = sh2->sr & T;
}

static void Op0D29(unsigned short opcode)
{
	sh2->r[13] = sh2->sr & T;
}

static void Op0E29(unsigned short opcode)
{
	sh2->r[14] = sh2->sr & T;
}

static void Op0F29(unsigned short opcode)
{
	sh2->r[15] = sh2->sr & T;
}

// STS PR,Rn
static void Op002A(unsigned short opcode)
{
	sh2->r[0] = sh2->pr;
}

static void Op012A(unsigned short opcode)
{
	sh2->r[1] = sh2->pr;
}

static void Op022A(unsigned short opcode)
{
	sh2->r[2] = sh2->pr;
}

static void Op032A(unsigned short opcode)
{
	sh2->r[3] = sh2->pr;
}

static void Op042A(unsigned short opcode)
{
	sh2->r[4] = sh2->pr;
}

static void Op052A(unsigned short opcode)
{
	sh2->r[5] = sh2->pr;
}

static void Op062A(unsigned short opcode)
{
	sh2->r[6] = sh2->pr;
}

static void Op072A(unsigned short opcode)
{
	sh2->r[7] = sh2->pr;
}

static void Op082A(unsigned short opcode)
{
	sh2->r[8] = sh2->pr;
}

static void Op092A(unsigned short opcode)
{
	sh2->r[9] = sh2->pr;
}

static void Op0A2A(unsigned short opcode)
{
	sh2->r[10] = sh2->pr;
}

static void Op0B2A(unsigned short opcode)
{
	sh2->r[11] = sh2->pr;
}

static void Op0C2A(unsigned short opcode)
{
	sh2->r[12] = sh2->pr;
}

static void Op0D2A(unsigned short opcode)
{
	sh2->r[13] = sh2->pr;
}

static void Op0E2A(unsigned short opcode)
{
	sh2->r[14] = sh2->pr;
}

static void Op0F2A(unsigned short opcode)
{
	sh2->r[15] = sh2->pr;
}

// RTE
static void Op002B(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->delay = sh2->pc;
	sh2->pc = RL( sh2->ea );
	sh2->r[15] += 4;
	sh2->ea = sh2->r[15];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[15] += 4;
	sh2->sh2_icount -= 3;
	sh2->test_irq = 1;
}

// MOV.L Rm,@(disp4,Rn)
static void Op1000(unsigned short opcode)
{
	sh2->ea = sh2->r[(opcode>>8) & 0x0f] + ((opcode<<2) & 0x3c);
	WL( sh2->ea, sh2->r[(opcode>>4) & 0x0f] );
}

// MOV.B Rm,@Rn
static void Op2000(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2010(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2020(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2030(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2040(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2050(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2060(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2070(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2080(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2090(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op20A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op20B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op20C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op20D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op20E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op20F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2100(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2110(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2120(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2130(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2140(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2150(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2160(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2170(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2180(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2190(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op21A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op21B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op21C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op21D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op21E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op21F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2200(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2210(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2220(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2230(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2240(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2250(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2260(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2270(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2280(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2290(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op22A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op22B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op22C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op22D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op22E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op22F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2300(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2310(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2320(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2330(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2340(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2350(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2360(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2370(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2380(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2390(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op23A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op23B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op23C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op23D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op23E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op23F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2400(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2410(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2420(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2430(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2440(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2450(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2460(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2470(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2480(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2490(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op24A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op24B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op24C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op24D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op24E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op24F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2500(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2510(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2520(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2530(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2540(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2550(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2560(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2570(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2580(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2590(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op25A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op25B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op25C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op25D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op25E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op25F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2600(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2610(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2620(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2630(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2640(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2650(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2660(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2670(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2680(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2690(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op26A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op26B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op26C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op26D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op26E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op26F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2700(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2710(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2720(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2730(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2740(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2750(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2760(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2770(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2780(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2790(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op27A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op27B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op27C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op27D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op27E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op27F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2800(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2810(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2820(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2830(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2840(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2850(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2860(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2870(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2880(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2890(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op28A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op28B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op28C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op28D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op28E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op28F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2900(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2910(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2920(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2930(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2940(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2950(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2960(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2970(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2980(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2990(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op29A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op29B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op29C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op29D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op29E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op29F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2A00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2A10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2A20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2A30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2A40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2A50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2A60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2A70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2A80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2A90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2AA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2AB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2AC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2AD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2AE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2AF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2B00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2B10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2B20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2B30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2B40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2B50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2B60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2B70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2B80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2B90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2BA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2BB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2BC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2BD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2BE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2BF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2C00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2C10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2C20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2C30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2C40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2C50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2C60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2C70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2C80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2C90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2CA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2CB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2CC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2CD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2CE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2CF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2D00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2D10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2D20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2D30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2D40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2D50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2D60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2D70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2D80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2D90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2DA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2DB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2DC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2DD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2DE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2DF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2E00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2E10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2E20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2E30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2E40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2E50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2E60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2E70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2E80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2E90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2EA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2EB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2EC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2ED0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2EE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2EF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

static void Op2F00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[0] & 0x000000ff);
}

static void Op2F10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[1] & 0x000000ff);
}

static void Op2F20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[2] & 0x000000ff);
}

static void Op2F30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[3] & 0x000000ff);
}

static void Op2F40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[4] & 0x000000ff);
}

static void Op2F50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[5] & 0x000000ff);
}

static void Op2F60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[6] & 0x000000ff);
}

static void Op2F70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[7] & 0x000000ff);
}

static void Op2F80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[8] & 0x000000ff);
}

static void Op2F90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[9] & 0x000000ff);
}

static void Op2FA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[10] & 0x000000ff);
}

static void Op2FB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[11] & 0x000000ff);
}

static void Op2FC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[12] & 0x000000ff);
}

static void Op2FD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[13] & 0x000000ff);
}

static void Op2FE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[14] & 0x000000ff);
}

static void Op2FF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WB( sh2->ea, sh2->r[15] & 0x000000ff);
}

// MOV.W Rm,@Rn
static void Op2001(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2011(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2021(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2031(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2041(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2051(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2061(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2071(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2081(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2091(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op20A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op20B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op20C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op20D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op20E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op20F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2101(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2111(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2121(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2131(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2141(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2151(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2161(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2171(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2181(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2191(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op21A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op21B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op21C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op21D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op21E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op21F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2201(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2211(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2221(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2231(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2241(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2251(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2261(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2271(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2281(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2291(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op22A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op22B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op22C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op22D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op22E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op22F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2301(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2311(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2321(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2331(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2341(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2351(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2361(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2371(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2381(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2391(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op23A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op23B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op23C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op23D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op23E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op23F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2401(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2411(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2421(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2431(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2441(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2451(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2461(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2471(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2481(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2491(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op24A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op24B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op24C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op24D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op24E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op24F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2501(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2511(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2521(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2531(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2541(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2551(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2561(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2571(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2581(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2591(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op25A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op25B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op25C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op25D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op25E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op25F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2601(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2611(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2621(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2631(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2641(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2651(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2661(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2671(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2681(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2691(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op26A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op26B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op26C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op26D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op26E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op26F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2701(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2711(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2721(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2731(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2741(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2751(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2761(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2771(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2781(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2791(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op27A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op27B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op27C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op27D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op27E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op27F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2801(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2811(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2821(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2831(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2841(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2851(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2861(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2871(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2881(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2891(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op28A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op28B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op28C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op28D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op28E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op28F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2901(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2911(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2921(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2931(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2941(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2951(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2961(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2971(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2981(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2991(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op29A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op29B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op29C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op29D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op29E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op29F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2A01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2A11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2A21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2A31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2A41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2A51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2A61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2A71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2A81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2A91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2AA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2AB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2AC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2AD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2AE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2AF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2B01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2B11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2B21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2B31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2B41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2B51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2B61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2B71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2B81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2B91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2BA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2BB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2BC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2BD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2BE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2BF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2C01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2C11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2C21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2C31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2C41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2C51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2C61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2C71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2C81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2C91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2CA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2CB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2CC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2CD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2CE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2CF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2D01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2D11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2D21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2D31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2D41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2D51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2D61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2D71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2D81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2D91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2DA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2DB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2DC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2DD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2DE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2DF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2E01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2E11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2E21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2E31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2E41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2E51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2E61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2E71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2E81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2E91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2EA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2EB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2EC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2ED1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2EE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2EF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

static void Op2F01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[0] & 0x0000ffff);
}

static void Op2F11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[1] & 0x0000ffff);
}

static void Op2F21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[2] & 0x0000ffff);
}

static void Op2F31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[3] & 0x0000ffff);
}

static void Op2F41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[4] & 0x0000ffff);
}

static void Op2F51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[5] & 0x0000ffff);
}

static void Op2F61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[6] & 0x0000ffff);
}

static void Op2F71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[7] & 0x0000ffff);
}

static void Op2F81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[8] & 0x0000ffff);
}

static void Op2F91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[9] & 0x0000ffff);
}

static void Op2FA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[10] & 0x0000ffff);
}

static void Op2FB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[11] & 0x0000ffff);
}

static void Op2FC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[12] & 0x0000ffff);
}

static void Op2FD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[13] & 0x0000ffff);
}

static void Op2FE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[14] & 0x0000ffff);
}

static void Op2FF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WW( sh2->ea, sh2->r[15] & 0x0000ffff);
}

// MOV.L Rm,@Rn
static void Op2002(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2012(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2022(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2032(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2042(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2052(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2062(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2072(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2082(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2092(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[9] );
}

static void Op20A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[10] );
}

static void Op20B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[11] );
}

static void Op20C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[12] );
}

static void Op20D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[13] );
}

static void Op20E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[14] );
}

static void Op20F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2102(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2112(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2122(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2132(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2142(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2152(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2162(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2172(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2182(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2192(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[9] );
}

static void Op21A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[10] );
}

static void Op21B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[11] );
}

static void Op21C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[12] );
}

static void Op21D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[13] );
}

static void Op21E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[14] );
}

static void Op21F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2202(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2212(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2222(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2232(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2242(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2252(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2262(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2272(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2282(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2292(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[9] );
}

static void Op22A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[10] );
}

static void Op22B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[11] );
}

static void Op22C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[12] );
}

static void Op22D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[13] );
}

static void Op22E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[14] );
}

static void Op22F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2302(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2312(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2322(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2332(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2342(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2352(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2362(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2372(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2382(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2392(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[9] );
}

static void Op23A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[10] );
}

static void Op23B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[11] );
}

static void Op23C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[12] );
}

static void Op23D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[13] );
}

static void Op23E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[14] );
}

static void Op23F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2402(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2412(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2422(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2432(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2442(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2452(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2462(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2472(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2482(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2492(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[9] );
}

static void Op24A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[10] );
}

static void Op24B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[11] );
}

static void Op24C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[12] );
}

static void Op24D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[13] );
}

static void Op24E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[14] );
}

static void Op24F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2502(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2512(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2522(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2532(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2542(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2552(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2562(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2572(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2582(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2592(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[9] );
}

static void Op25A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[10] );
}

static void Op25B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[11] );
}

static void Op25C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[12] );
}

static void Op25D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[13] );
}

static void Op25E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[14] );
}

static void Op25F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2602(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2612(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2622(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2632(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2642(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2652(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2662(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2672(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2682(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2692(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[9] );
}

static void Op26A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[10] );
}

static void Op26B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[11] );
}

static void Op26C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[12] );
}

static void Op26D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[13] );
}

static void Op26E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[14] );
}

static void Op26F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2702(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2712(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2722(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2732(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2742(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2752(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2762(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2772(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2782(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2792(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[9] );
}

static void Op27A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[10] );
}

static void Op27B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[11] );
}

static void Op27C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[12] );
}

static void Op27D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[13] );
}

static void Op27E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[14] );
}

static void Op27F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2802(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2812(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2822(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2832(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2842(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2852(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2862(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2872(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2882(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2892(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[9] );
}

static void Op28A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[10] );
}

static void Op28B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[11] );
}

static void Op28C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[12] );
}

static void Op28D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[13] );
}

static void Op28E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[14] );
}

static void Op28F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2902(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2912(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2922(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2932(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2942(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2952(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2962(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2972(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2982(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2992(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[9] );
}

static void Op29A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[10] );
}

static void Op29B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[11] );
}

static void Op29C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[12] );
}

static void Op29D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[13] );
}

static void Op29E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[14] );
}

static void Op29F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2A02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2A12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2A22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2A32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2A42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2A52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2A62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2A72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2A82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2A92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2AA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2AB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2AC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2AD2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2AE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2AF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2B02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2B12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2B22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2B32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2B42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2B52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2B62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2B72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2B82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2B92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2BA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2BB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2BC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2BD2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2BE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2BF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2C02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2C12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2C22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2C32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2C42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2C52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2C62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2C72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2C82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2C92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2CA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2CB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2CC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2CD2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2CE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2CF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2D02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2D12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2D22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2D32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2D42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2D52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2D62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2D72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2D82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2D92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2DA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2DB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2DC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2DD2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2DE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2DF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2E02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2E12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2E22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2E32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2E42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2E52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2E62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2E72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2E82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2E92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2EA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2EB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2EC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2ED2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2EE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2EF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->r[15] );
}

static void Op2F02(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[0] );
}

static void Op2F12(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[1] );
}

static void Op2F22(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[2] );
}

static void Op2F32(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[3] );
}

static void Op2F42(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[4] );
}

static void Op2F52(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[5] );
}

static void Op2F62(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[6] );
}

static void Op2F72(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[7] );
}

static void Op2F82(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[8] );
}

static void Op2F92(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[9] );
}

static void Op2FA2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[10] );
}

static void Op2FB2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[11] );
}

static void Op2FC2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[12] );
}

static void Op2FD2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[13] );
}

static void Op2FE2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[14] );
}

static void Op2FF2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->r[15] );
}

// MOV.B Rm,@-Rn
static void Op2004(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2014(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2024(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2034(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2044(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2054(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2064(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2074(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2084(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2094(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op20F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[0] -= 1;
	WB( sh2->r[0], data );
}

static void Op2104(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2114(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2124(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2134(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2144(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2154(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2164(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2174(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2184(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2194(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op21F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[1] -= 1;
	WB( sh2->r[1], data );
}

static void Op2204(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2214(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2224(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2234(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2244(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2254(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2264(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2274(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2284(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2294(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op22F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[2] -= 1;
	WB( sh2->r[2], data );
}

static void Op2304(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2314(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2324(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2334(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2344(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2354(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2364(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2374(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2384(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2394(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op23F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[3] -= 1;
	WB( sh2->r[3], data );
}

static void Op2404(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2414(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2424(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2434(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2444(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2454(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2464(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2474(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2484(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2494(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op24F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[4] -= 1;
	WB( sh2->r[4], data );
}

static void Op2504(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2514(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2524(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2534(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2544(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2554(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2564(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2574(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2584(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2594(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op25F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[5] -= 1;
	WB( sh2->r[5], data );
}

static void Op2604(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2614(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2624(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2634(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2644(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2654(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2664(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2674(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2684(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2694(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op26F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[6] -= 1;
	WB( sh2->r[6], data );
}

static void Op2704(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2714(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2724(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2734(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2744(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2754(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2764(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2774(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2784(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2794(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op27F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[7] -= 1;
	WB( sh2->r[7], data );
}

static void Op2804(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2814(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2824(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2834(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2844(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2854(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2864(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2874(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2884(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2894(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op28F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[8] -= 1;
	WB( sh2->r[8], data );
}

static void Op2904(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2914(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2924(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2934(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2944(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2954(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2964(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2974(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2984(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2994(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29A4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29B4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29C4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29D4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29E4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op29F4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[9] -= 1;
	WB( sh2->r[9], data );
}

static void Op2A04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2A94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AD4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2AF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[10] -= 1;
	WB( sh2->r[10], data );
}

static void Op2B04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2B94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BD4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2BF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[11] -= 1;
	WB( sh2->r[11], data );
}

static void Op2C04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2C94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CD4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2CF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[12] -= 1;
	WB( sh2->r[12], data );
}

static void Op2D04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2D94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DD4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2DF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[13] -= 1;
	WB( sh2->r[13], data );
}

static void Op2E04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2E94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2EA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2EB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2EC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2ED4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2EE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2EF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[14] -= 1;
	WB( sh2->r[14], data );
}

static void Op2F04(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F14(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F24(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F34(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F44(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F54(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F64(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F74(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F84(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2F94(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FA4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FB4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FC4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FD4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FE4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

static void Op2FF4(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x000000ff;
	sh2->r[15] -= 1;
	WB( sh2->r[15], data );
}

// MOV.W Rm,@-Rn
static void Op2005(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2015(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2025(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2035(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2045(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2055(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2065(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2075(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2085(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2095(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op20F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[0] -= 2;
	WW( sh2->r[0], data );
}

static void Op2105(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2115(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2125(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2135(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2145(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2155(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2165(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2175(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2185(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2195(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op21F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[1] -= 2;
	WW( sh2->r[1], data );
}

static void Op2205(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2215(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2225(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2235(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2245(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2255(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2265(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2275(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2285(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2295(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op22F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[2] -= 2;
	WW( sh2->r[2], data );
}

static void Op2305(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2315(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2325(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2335(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2345(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2355(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2365(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2375(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2385(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2395(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op23F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[3] -= 2;
	WW( sh2->r[3], data );
}

static void Op2405(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2415(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2425(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2435(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2445(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2455(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2465(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2475(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2485(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2495(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op24F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[4] -= 2;
	WW( sh2->r[4], data );
}

static void Op2505(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2515(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2525(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2535(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2545(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2555(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2565(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2575(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2585(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2595(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op25F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[5] -= 2;
	WW( sh2->r[5], data );
}

static void Op2605(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2615(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2625(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2635(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2645(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2655(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2665(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2675(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2685(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2695(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op26F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[6] -= 2;
	WW( sh2->r[6], data );
}

static void Op2705(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2715(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2725(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2735(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2745(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2755(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2765(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2775(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2785(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2795(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op27F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[7] -= 2;
	WW( sh2->r[7], data );
}

static void Op2805(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2815(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2825(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2835(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2845(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2855(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2865(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2875(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2885(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2895(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op28F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[8] -= 2;
	WW( sh2->r[8], data );
}

static void Op2905(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2915(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2925(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2935(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2945(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2955(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2965(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2975(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2985(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2995(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29A5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29B5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29C5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29D5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29E5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op29F5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[9] -= 2;
	WW( sh2->r[9], data );
}

static void Op2A05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2A95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AD5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2AF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[10] -= 2;
	WW( sh2->r[10], data );
}

static void Op2B05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2B95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BD5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2BF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[11] -= 2;
	WW( sh2->r[11], data );
}

static void Op2C05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2C95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CD5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2CF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[12] -= 2;
	WW( sh2->r[12], data );
}

static void Op2D05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2D95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DD5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2DF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[13] -= 2;
	WW( sh2->r[13], data );
}

static void Op2E05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2E95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2EA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2EB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2EC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2ED5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2EE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2EF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[14] -= 2;
	WW( sh2->r[14], data );
}

static void Op2F05(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F15(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F25(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F35(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F45(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F55(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F65(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F75(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F85(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2F95(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FA5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FB5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FC5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FD5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FE5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

static void Op2FF5(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15] & 0x0000ffff;
	sh2->r[15] -= 2;
	WW( sh2->r[15], data );
}

// MOV.L Rm,@-Rn
static void Op2006(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2016(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2026(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2036(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2046(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2056(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2066(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2076(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2086(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2096(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op20F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[0] -= 4;
	WL( sh2->r[0], data );
}

static void Op2106(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2116(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2126(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2136(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2146(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2156(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2166(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2176(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2186(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2196(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op21F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[1] -= 4;
	WL( sh2->r[1], data );
}

static void Op2206(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2216(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2226(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2236(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2246(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2256(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2266(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2276(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2286(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2296(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op22F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[2] -= 4;
	WL( sh2->r[2], data );
}

static void Op2306(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2316(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2326(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2336(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2346(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2356(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2366(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2376(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2386(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2396(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op23F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[3] -= 4;
	WL( sh2->r[3], data );
}

static void Op2406(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2416(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2426(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2436(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2446(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2456(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2466(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2476(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2486(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2496(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op24F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[4] -= 4;
	WL( sh2->r[4], data );
}

static void Op2506(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2516(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2526(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2536(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2546(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2556(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2566(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2576(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2586(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2596(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op25F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[5] -= 4;
	WL( sh2->r[5], data );
}

static void Op2606(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2616(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2626(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2636(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2646(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2656(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2666(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2676(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2686(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2696(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op26F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[6] -= 4;
	WL( sh2->r[6], data );
}

static void Op2706(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2716(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2726(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2736(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2746(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2756(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2766(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2776(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2786(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2796(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op27F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[7] -= 4;
	WL( sh2->r[7], data );
}

static void Op2806(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2816(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2826(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2836(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2846(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2856(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2866(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2876(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2886(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2896(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op28F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[8] -= 4;
	WL( sh2->r[8], data );
}

static void Op2906(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2916(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2926(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2936(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2946(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2956(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2966(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2976(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2986(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2996(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29A6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29B6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29C6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29D6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29E6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op29F6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[9] -= 4;
	WL( sh2->r[9], data );
}

static void Op2A06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2A96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AD6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2AF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[10] -= 4;
	WL( sh2->r[10], data );
}

static void Op2B06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2B96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BD6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2BF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[11] -= 4;
	WL( sh2->r[11], data );
}

static void Op2C06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2C96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CD6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2CF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[12] -= 4;
	WL( sh2->r[12], data );
}

static void Op2D06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2D96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DD6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2DF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[13] -= 4;
	WL( sh2->r[13], data );
}

static void Op2E06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2E96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2EA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2EB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2EC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2ED6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2EE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2EF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[14] -= 4;
	WL( sh2->r[14], data );
}

static void Op2F06(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[0];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F16(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[1];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F26(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[2];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F36(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[3];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F46(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[4];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F56(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[5];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F66(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[6];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F76(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[7];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F86(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[8];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2F96(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[9];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FA6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[10];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FB6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[11];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FC6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[12];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FD6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[13];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FE6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[14];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

static void Op2FF6(unsigned short /*opcode*/)
{
	UINT32 data = sh2->r[15];
	sh2->r[15] -= 4;
	WL( sh2->r[15], data );
}

// DIV0S Rm,Rn
static void Op2007(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2017(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2027(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2037(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2047(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2057(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2067(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2077(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2087(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2097(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20A7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20B7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20C7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20D7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20E7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20F7(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[0]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2107(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2117(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2127(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2137(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2147(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2157(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2167(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2177(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2187(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2197(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21A7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21B7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21C7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21D7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21E7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21F7(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[1]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2207(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2217(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2227(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2237(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2247(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2257(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2267(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2277(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2287(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2297(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22A7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22B7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22C7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22D7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22E7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22F7(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[2]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2307(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2317(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2327(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2337(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2347(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2357(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2367(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2377(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2387(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2397(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23A7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23B7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23C7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23D7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23E7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23F7(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[3]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2407(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2417(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2427(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2437(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2447(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2457(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2467(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2477(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2487(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2497(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24A7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24B7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24C7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24D7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24E7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24F7(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[4]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2507(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2517(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2527(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2537(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2547(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2557(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2567(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2577(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2587(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2597(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25A7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25B7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25C7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25D7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25E7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25F7(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[5]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2607(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2617(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2627(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2637(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2647(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2657(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2667(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2677(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2687(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2697(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26A7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26B7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26C7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26D7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26E7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26F7(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[6]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2707(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2717(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2727(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2737(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2747(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2757(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2767(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2777(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2787(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2797(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27A7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27B7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27C7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27D7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27E7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27F7(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[7]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2807(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2817(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2827(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2837(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2847(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2857(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2867(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2877(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2887(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2897(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28A7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28B7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28C7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28D7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28E7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28F7(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[8]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2907(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2917(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2927(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2937(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2947(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2957(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2967(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2977(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2987(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2997(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29A7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29B7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29C7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29D7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29E7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29F7(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[9]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A07(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A17(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A27(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A37(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A47(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A57(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A67(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A77(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A87(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A97(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AA7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AB7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AC7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AD7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AE7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AF7(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[10]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B07(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B17(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B27(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B37(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B47(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B57(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B67(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B77(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B87(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B97(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BA7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BB7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BC7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BD7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BE7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BF7(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[11]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C07(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C17(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C27(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C37(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C47(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C57(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C67(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C77(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C87(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C97(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CA7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CB7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CC7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CD7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CE7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CF7(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[12]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D07(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D17(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D27(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D37(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D47(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D57(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D67(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D77(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D87(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D97(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DA7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DB7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DC7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DD7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DE7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DF7(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[13]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E07(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E17(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E27(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E37(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E47(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E57(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E67(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E77(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E87(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E97(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EA7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EB7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EC7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2ED7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EE7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EF7(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[14]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F07(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[0] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[0] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F17(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[1] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[1] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F27(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[2] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[2] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F37(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[3] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[3] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F47(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[4] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[4] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F57(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[5] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[5] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F67(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[6] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[6] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F77(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[7] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[7] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F87(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[8] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[8] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F97(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[9] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[9] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FA7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[10] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[10] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FB7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[11] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[11] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FC7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[12] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[12] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FD7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[13] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[13] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FE7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[14] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[14] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FF7(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~Q;
	else
		sh2->sr |= Q;
	if ((sh2->r[15] & 0x80000000) == 0)
		sh2->sr &= ~M;
	else
		sh2->sr |= M;
	if ((sh2->r[15] ^ sh2->r[15]) & 0x80000000)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// TST Rm,Rn
static void Op2008(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2018(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2028(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2038(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2048(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2058(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2068(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2078(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2088(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2098(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20A8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20B8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20C8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20D8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20E8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op20F8(unsigned short /*opcode*/)
{
	if ((sh2->r[0] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2108(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2118(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2128(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2138(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2148(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2158(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2168(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2178(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2188(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2198(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21A8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21B8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21C8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21D8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21E8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op21F8(unsigned short /*opcode*/)
{
	if ((sh2->r[1] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2208(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2218(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2228(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2238(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2248(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2258(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2268(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2278(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2288(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2298(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22A8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22B8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22C8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22D8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22E8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op22F8(unsigned short /*opcode*/)
{
	if ((sh2->r[2] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2308(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2318(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2328(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2338(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2348(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2358(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2368(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2378(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2388(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2398(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23A8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23B8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23C8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23D8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23E8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op23F8(unsigned short /*opcode*/)
{
	if ((sh2->r[3] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2408(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2418(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2428(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2438(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2448(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2458(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2468(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2478(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2488(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2498(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24A8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24B8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24C8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24D8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24E8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op24F8(unsigned short /*opcode*/)
{
	if ((sh2->r[4] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2508(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2518(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2528(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2538(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2548(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2558(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2568(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2578(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2588(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2598(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25A8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25B8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25C8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25D8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25E8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op25F8(unsigned short /*opcode*/)
{
	if ((sh2->r[5] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2608(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2618(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2628(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2638(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2648(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2658(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2668(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2678(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2688(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2698(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26A8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26B8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26C8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26D8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26E8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op26F8(unsigned short /*opcode*/)
{
	if ((sh2->r[6] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2708(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2718(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2728(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2738(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2748(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2758(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2768(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2778(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2788(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2798(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27A8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27B8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27C8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27D8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27E8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op27F8(unsigned short /*opcode*/)
{
	if ((sh2->r[7] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2808(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2818(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2828(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2838(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2848(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2858(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2868(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2878(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2888(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2898(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28A8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28B8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28C8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28D8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28E8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op28F8(unsigned short /*opcode*/)
{
	if ((sh2->r[8] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2908(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2918(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2928(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2938(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2948(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2958(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2968(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2978(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2988(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2998(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29A8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29B8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29C8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29D8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29E8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op29F8(unsigned short /*opcode*/)
{
	if ((sh2->r[9] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A08(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A18(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A28(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A38(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A48(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A58(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A68(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A78(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A88(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2A98(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AA8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AB8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AC8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AD8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AE8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2AF8(unsigned short /*opcode*/)
{
	if ((sh2->r[10] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B08(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B18(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B28(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B38(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B48(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B58(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B68(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B78(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B88(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2B98(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BA8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BB8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BC8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BD8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BE8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2BF8(unsigned short /*opcode*/)
{
	if ((sh2->r[11] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C08(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C18(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C28(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C38(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C48(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C58(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C68(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C78(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C88(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2C98(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CA8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CB8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CC8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CD8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CE8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2CF8(unsigned short /*opcode*/)
{
	if ((sh2->r[12] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D08(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D18(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D28(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D38(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D48(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D58(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D68(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D78(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D88(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2D98(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DA8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DB8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DC8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DD8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DE8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2DF8(unsigned short /*opcode*/)
{
	if ((sh2->r[13] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E08(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E18(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E28(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E38(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E48(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E58(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E68(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E78(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E88(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2E98(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EA8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EB8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EC8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2ED8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EE8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2EF8(unsigned short /*opcode*/)
{
	if ((sh2->r[14] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F08(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[0]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F18(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[1]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F28(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[2]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F38(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[3]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F48(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[4]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F58(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[5]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F68(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[6]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F78(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[7]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F88(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[8]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2F98(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[9]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FA8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[10]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FB8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[11]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FC8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[12]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FD8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[13]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FE8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[14]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op2FF8(unsigned short /*opcode*/)
{
	if ((sh2->r[15] & sh2->r[15]) == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// AND Rm,Rn
static void Op2009(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[0];
}

static void Op2019(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[1];
}

static void Op2029(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[2];
}

static void Op2039(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[3];
}

static void Op2049(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[4];
}

static void Op2059(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[5];
}

static void Op2069(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[6];
}

static void Op2079(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[7];
}

static void Op2089(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[8];
}

static void Op2099(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[9];
}

static void Op20A9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[10];
}

static void Op20B9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[11];
}

static void Op20C9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[12];
}

static void Op20D9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[13];
}

static void Op20E9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[14];
}

static void Op20F9(unsigned short /*opcode*/)
{
	sh2->r[0] &= sh2->r[15];
}

static void Op2109(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[0];
}

static void Op2119(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[1];
}

static void Op2129(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[2];
}

static void Op2139(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[3];
}

static void Op2149(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[4];
}

static void Op2159(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[5];
}

static void Op2169(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[6];
}

static void Op2179(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[7];
}

static void Op2189(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[8];
}

static void Op2199(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[9];
}

static void Op21A9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[10];
}

static void Op21B9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[11];
}

static void Op21C9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[12];
}

static void Op21D9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[13];
}

static void Op21E9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[14];
}

static void Op21F9(unsigned short /*opcode*/)
{
	sh2->r[1] &= sh2->r[15];
}

static void Op2209(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[0];
}

static void Op2219(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[1];
}

static void Op2229(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[2];
}

static void Op2239(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[3];
}

static void Op2249(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[4];
}

static void Op2259(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[5];
}

static void Op2269(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[6];
}

static void Op2279(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[7];
}

static void Op2289(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[8];
}

static void Op2299(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[9];
}

static void Op22A9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[10];
}

static void Op22B9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[11];
}

static void Op22C9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[12];
}

static void Op22D9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[13];
}

static void Op22E9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[14];
}

static void Op22F9(unsigned short /*opcode*/)
{
	sh2->r[2] &= sh2->r[15];
}

static void Op2309(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[0];
}

static void Op2319(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[1];
}

static void Op2329(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[2];
}

static void Op2339(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[3];
}

static void Op2349(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[4];
}

static void Op2359(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[5];
}

static void Op2369(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[6];
}

static void Op2379(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[7];
}

static void Op2389(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[8];
}

static void Op2399(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[9];
}

static void Op23A9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[10];
}

static void Op23B9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[11];
}

static void Op23C9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[12];
}

static void Op23D9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[13];
}

static void Op23E9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[14];
}

static void Op23F9(unsigned short /*opcode*/)
{
	sh2->r[3] &= sh2->r[15];
}

static void Op2409(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[0];
}

static void Op2419(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[1];
}

static void Op2429(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[2];
}

static void Op2439(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[3];
}

static void Op2449(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[4];
}

static void Op2459(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[5];
}

static void Op2469(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[6];
}

static void Op2479(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[7];
}

static void Op2489(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[8];
}

static void Op2499(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[9];
}

static void Op24A9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[10];
}

static void Op24B9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[11];
}

static void Op24C9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[12];
}

static void Op24D9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[13];
}

static void Op24E9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[14];
}

static void Op24F9(unsigned short /*opcode*/)
{
	sh2->r[4] &= sh2->r[15];
}

static void Op2509(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[0];
}

static void Op2519(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[1];
}

static void Op2529(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[2];
}

static void Op2539(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[3];
}

static void Op2549(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[4];
}

static void Op2559(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[5];
}

static void Op2569(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[6];
}

static void Op2579(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[7];
}

static void Op2589(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[8];
}

static void Op2599(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[9];
}

static void Op25A9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[10];
}

static void Op25B9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[11];
}

static void Op25C9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[12];
}

static void Op25D9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[13];
}

static void Op25E9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[14];
}

static void Op25F9(unsigned short /*opcode*/)
{
	sh2->r[5] &= sh2->r[15];
}

static void Op2609(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[0];
}

static void Op2619(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[1];
}

static void Op2629(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[2];
}

static void Op2639(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[3];
}

static void Op2649(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[4];
}

static void Op2659(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[5];
}

static void Op2669(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[6];
}

static void Op2679(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[7];
}

static void Op2689(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[8];
}

static void Op2699(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[9];
}

static void Op26A9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[10];
}

static void Op26B9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[11];
}

static void Op26C9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[12];
}

static void Op26D9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[13];
}

static void Op26E9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[14];
}

static void Op26F9(unsigned short /*opcode*/)
{
	sh2->r[6] &= sh2->r[15];
}

static void Op2709(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[0];
}

static void Op2719(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[1];
}

static void Op2729(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[2];
}

static void Op2739(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[3];
}

static void Op2749(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[4];
}

static void Op2759(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[5];
}

static void Op2769(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[6];
}

static void Op2779(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[7];
}

static void Op2789(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[8];
}

static void Op2799(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[9];
}

static void Op27A9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[10];
}

static void Op27B9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[11];
}

static void Op27C9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[12];
}

static void Op27D9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[13];
}

static void Op27E9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[14];
}

static void Op27F9(unsigned short /*opcode*/)
{
	sh2->r[7] &= sh2->r[15];
}

static void Op2809(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[0];
}

static void Op2819(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[1];
}

static void Op2829(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[2];
}

static void Op2839(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[3];
}

static void Op2849(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[4];
}

static void Op2859(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[5];
}

static void Op2869(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[6];
}

static void Op2879(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[7];
}

static void Op2889(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[8];
}

static void Op2899(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[9];
}

static void Op28A9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[10];
}

static void Op28B9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[11];
}

static void Op28C9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[12];
}

static void Op28D9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[13];
}

static void Op28E9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[14];
}

static void Op28F9(unsigned short /*opcode*/)
{
	sh2->r[8] &= sh2->r[15];
}

static void Op2909(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[0];
}

static void Op2919(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[1];
}

static void Op2929(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[2];
}

static void Op2939(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[3];
}

static void Op2949(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[4];
}

static void Op2959(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[5];
}

static void Op2969(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[6];
}

static void Op2979(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[7];
}

static void Op2989(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[8];
}

static void Op2999(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[9];
}

static void Op29A9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[10];
}

static void Op29B9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[11];
}

static void Op29C9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[12];
}

static void Op29D9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[13];
}

static void Op29E9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[14];
}

static void Op29F9(unsigned short /*opcode*/)
{
	sh2->r[9] &= sh2->r[15];
}

static void Op2A09(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[0];
}

static void Op2A19(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[1];
}

static void Op2A29(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[2];
}

static void Op2A39(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[3];
}

static void Op2A49(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[4];
}

static void Op2A59(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[5];
}

static void Op2A69(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[6];
}

static void Op2A79(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[7];
}

static void Op2A89(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[8];
}

static void Op2A99(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[9];
}

static void Op2AA9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[10];
}

static void Op2AB9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[11];
}

static void Op2AC9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[12];
}

static void Op2AD9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[13];
}

static void Op2AE9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[14];
}

static void Op2AF9(unsigned short /*opcode*/)
{
	sh2->r[10] &= sh2->r[15];
}

static void Op2B09(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[0];
}

static void Op2B19(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[1];
}

static void Op2B29(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[2];
}

static void Op2B39(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[3];
}

static void Op2B49(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[4];
}

static void Op2B59(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[5];
}

static void Op2B69(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[6];
}

static void Op2B79(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[7];
}

static void Op2B89(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[8];
}

static void Op2B99(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[9];
}

static void Op2BA9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[10];
}

static void Op2BB9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[11];
}

static void Op2BC9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[12];
}

static void Op2BD9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[13];
}

static void Op2BE9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[14];
}

static void Op2BF9(unsigned short /*opcode*/)
{
	sh2->r[11] &= sh2->r[15];
}

static void Op2C09(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[0];
}

static void Op2C19(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[1];
}

static void Op2C29(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[2];
}

static void Op2C39(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[3];
}

static void Op2C49(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[4];
}

static void Op2C59(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[5];
}

static void Op2C69(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[6];
}

static void Op2C79(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[7];
}

static void Op2C89(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[8];
}

static void Op2C99(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[9];
}

static void Op2CA9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[10];
}

static void Op2CB9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[11];
}

static void Op2CC9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[12];
}

static void Op2CD9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[13];
}

static void Op2CE9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[14];
}

static void Op2CF9(unsigned short /*opcode*/)
{
	sh2->r[12] &= sh2->r[15];
}

static void Op2D09(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[0];
}

static void Op2D19(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[1];
}

static void Op2D29(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[2];
}

static void Op2D39(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[3];
}

static void Op2D49(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[4];
}

static void Op2D59(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[5];
}

static void Op2D69(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[6];
}

static void Op2D79(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[7];
}

static void Op2D89(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[8];
}

static void Op2D99(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[9];
}

static void Op2DA9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[10];
}

static void Op2DB9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[11];
}

static void Op2DC9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[12];
}

static void Op2DD9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[13];
}

static void Op2DE9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[14];
}

static void Op2DF9(unsigned short /*opcode*/)
{
	sh2->r[13] &= sh2->r[15];
}

static void Op2E09(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[0];
}

static void Op2E19(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[1];
}

static void Op2E29(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[2];
}

static void Op2E39(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[3];
}

static void Op2E49(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[4];
}

static void Op2E59(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[5];
}

static void Op2E69(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[6];
}

static void Op2E79(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[7];
}

static void Op2E89(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[8];
}

static void Op2E99(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[9];
}

static void Op2EA9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[10];
}

static void Op2EB9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[11];
}

static void Op2EC9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[12];
}

static void Op2ED9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[13];
}

static void Op2EE9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[14];
}

static void Op2EF9(unsigned short /*opcode*/)
{
	sh2->r[14] &= sh2->r[15];
}

static void Op2F09(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[0];
}

static void Op2F19(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[1];
}

static void Op2F29(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[2];
}

static void Op2F39(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[3];
}

static void Op2F49(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[4];
}

static void Op2F59(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[5];
}

static void Op2F69(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[6];
}

static void Op2F79(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[7];
}

static void Op2F89(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[8];
}

static void Op2F99(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[9];
}

static void Op2FA9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[10];
}

static void Op2FB9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[11];
}

static void Op2FC9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[12];
}

static void Op2FD9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[13];
}

static void Op2FE9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[14];
}

static void Op2FF9(unsigned short /*opcode*/)
{
	sh2->r[15] &= sh2->r[15];
}

// XOR Rm,Rn
static void Op200A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[0];
}

static void Op201A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[1];
}

static void Op202A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[2];
}

static void Op203A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[3];
}

static void Op204A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[4];
}

static void Op205A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[5];
}

static void Op206A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[6];
}

static void Op207A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[7];
}

static void Op208A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[8];
}

static void Op209A(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[9];
}

static void Op20AA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[10];
}

static void Op20BA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[11];
}

static void Op20CA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[12];
}

static void Op20DA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[13];
}

static void Op20EA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[14];
}

static void Op20FA(unsigned short /*opcode*/)
{
	sh2->r[0] ^= sh2->r[15];
}

static void Op210A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[0];
}

static void Op211A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[1];
}

static void Op212A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[2];
}

static void Op213A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[3];
}

static void Op214A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[4];
}

static void Op215A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[5];
}

static void Op216A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[6];
}

static void Op217A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[7];
}

static void Op218A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[8];
}

static void Op219A(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[9];
}

static void Op21AA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[10];
}

static void Op21BA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[11];
}

static void Op21CA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[12];
}

static void Op21DA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[13];
}

static void Op21EA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[14];
}

static void Op21FA(unsigned short /*opcode*/)
{
	sh2->r[1] ^= sh2->r[15];
}

static void Op220A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[0];
}

static void Op221A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[1];
}

static void Op222A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[2];
}

static void Op223A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[3];
}

static void Op224A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[4];
}

static void Op225A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[5];
}

static void Op226A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[6];
}

static void Op227A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[7];
}

static void Op228A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[8];
}

static void Op229A(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[9];
}

static void Op22AA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[10];
}

static void Op22BA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[11];
}

static void Op22CA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[12];
}

static void Op22DA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[13];
}

static void Op22EA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[14];
}

static void Op22FA(unsigned short /*opcode*/)
{
	sh2->r[2] ^= sh2->r[15];
}

static void Op230A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[0];
}

static void Op231A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[1];
}

static void Op232A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[2];
}

static void Op233A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[3];
}

static void Op234A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[4];
}

static void Op235A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[5];
}

static void Op236A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[6];
}

static void Op237A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[7];
}

static void Op238A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[8];
}

static void Op239A(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[9];
}

static void Op23AA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[10];
}

static void Op23BA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[11];
}

static void Op23CA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[12];
}

static void Op23DA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[13];
}

static void Op23EA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[14];
}

static void Op23FA(unsigned short /*opcode*/)
{
	sh2->r[3] ^= sh2->r[15];
}

static void Op240A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[0];
}

static void Op241A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[1];
}

static void Op242A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[2];
}

static void Op243A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[3];
}

static void Op244A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[4];
}

static void Op245A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[5];
}

static void Op246A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[6];
}

static void Op247A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[7];
}

static void Op248A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[8];
}

static void Op249A(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[9];
}

static void Op24AA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[10];
}

static void Op24BA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[11];
}

static void Op24CA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[12];
}

static void Op24DA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[13];
}

static void Op24EA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[14];
}

static void Op24FA(unsigned short /*opcode*/)
{
	sh2->r[4] ^= sh2->r[15];
}

static void Op250A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[0];
}

static void Op251A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[1];
}

static void Op252A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[2];
}

static void Op253A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[3];
}

static void Op254A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[4];
}

static void Op255A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[5];
}

static void Op256A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[6];
}

static void Op257A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[7];
}

static void Op258A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[8];
}

static void Op259A(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[9];
}

static void Op25AA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[10];
}

static void Op25BA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[11];
}

static void Op25CA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[12];
}

static void Op25DA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[13];
}

static void Op25EA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[14];
}

static void Op25FA(unsigned short /*opcode*/)
{
	sh2->r[5] ^= sh2->r[15];
}

static void Op260A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[0];
}

static void Op261A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[1];
}

static void Op262A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[2];
}

static void Op263A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[3];
}

static void Op264A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[4];
}

static void Op265A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[5];
}

static void Op266A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[6];
}

static void Op267A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[7];
}

static void Op268A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[8];
}

static void Op269A(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[9];
}

static void Op26AA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[10];
}

static void Op26BA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[11];
}

static void Op26CA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[12];
}

static void Op26DA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[13];
}

static void Op26EA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[14];
}

static void Op26FA(unsigned short /*opcode*/)
{
	sh2->r[6] ^= sh2->r[15];
}

static void Op270A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[0];
}

static void Op271A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[1];
}

static void Op272A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[2];
}

static void Op273A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[3];
}

static void Op274A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[4];
}

static void Op275A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[5];
}

static void Op276A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[6];
}

static void Op277A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[7];
}

static void Op278A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[8];
}

static void Op279A(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[9];
}

static void Op27AA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[10];
}

static void Op27BA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[11];
}

static void Op27CA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[12];
}

static void Op27DA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[13];
}

static void Op27EA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[14];
}

static void Op27FA(unsigned short /*opcode*/)
{
	sh2->r[7] ^= sh2->r[15];
}

static void Op280A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[0];
}

static void Op281A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[1];
}

static void Op282A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[2];
}

static void Op283A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[3];
}

static void Op284A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[4];
}

static void Op285A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[5];
}

static void Op286A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[6];
}

static void Op287A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[7];
}

static void Op288A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[8];
}

static void Op289A(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[9];
}

static void Op28AA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[10];
}

static void Op28BA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[11];
}

static void Op28CA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[12];
}

static void Op28DA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[13];
}

static void Op28EA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[14];
}

static void Op28FA(unsigned short /*opcode*/)
{
	sh2->r[8] ^= sh2->r[15];
}

static void Op290A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[0];
}

static void Op291A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[1];
}

static void Op292A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[2];
}

static void Op293A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[3];
}

static void Op294A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[4];
}

static void Op295A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[5];
}

static void Op296A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[6];
}

static void Op297A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[7];
}

static void Op298A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[8];
}

static void Op299A(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[9];
}

static void Op29AA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[10];
}

static void Op29BA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[11];
}

static void Op29CA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[12];
}

static void Op29DA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[13];
}

static void Op29EA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[14];
}

static void Op29FA(unsigned short /*opcode*/)
{
	sh2->r[9] ^= sh2->r[15];
}

static void Op2A0A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[0];
}

static void Op2A1A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[1];
}

static void Op2A2A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[2];
}

static void Op2A3A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[3];
}

static void Op2A4A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[4];
}

static void Op2A5A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[5];
}

static void Op2A6A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[6];
}

static void Op2A7A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[7];
}

static void Op2A8A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[8];
}

static void Op2A9A(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[9];
}

static void Op2AAA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[10];
}

static void Op2ABA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[11];
}

static void Op2ACA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[12];
}

static void Op2ADA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[13];
}

static void Op2AEA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[14];
}

static void Op2AFA(unsigned short /*opcode*/)
{
	sh2->r[10] ^= sh2->r[15];
}

static void Op2B0A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[0];
}

static void Op2B1A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[1];
}

static void Op2B2A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[2];
}

static void Op2B3A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[3];
}

static void Op2B4A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[4];
}

static void Op2B5A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[5];
}

static void Op2B6A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[6];
}

static void Op2B7A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[7];
}

static void Op2B8A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[8];
}

static void Op2B9A(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[9];
}

static void Op2BAA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[10];
}

static void Op2BBA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[11];
}

static void Op2BCA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[12];
}

static void Op2BDA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[13];
}

static void Op2BEA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[14];
}

static void Op2BFA(unsigned short /*opcode*/)
{
	sh2->r[11] ^= sh2->r[15];
}

static void Op2C0A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[0];
}

static void Op2C1A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[1];
}

static void Op2C2A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[2];
}

static void Op2C3A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[3];
}

static void Op2C4A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[4];
}

static void Op2C5A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[5];
}

static void Op2C6A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[6];
}

static void Op2C7A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[7];
}

static void Op2C8A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[8];
}

static void Op2C9A(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[9];
}

static void Op2CAA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[10];
}

static void Op2CBA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[11];
}

static void Op2CCA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[12];
}

static void Op2CDA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[13];
}

static void Op2CEA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[14];
}

static void Op2CFA(unsigned short /*opcode*/)
{
	sh2->r[12] ^= sh2->r[15];
}

static void Op2D0A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[0];
}

static void Op2D1A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[1];
}

static void Op2D2A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[2];
}

static void Op2D3A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[3];
}

static void Op2D4A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[4];
}

static void Op2D5A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[5];
}

static void Op2D6A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[6];
}

static void Op2D7A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[7];
}

static void Op2D8A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[8];
}

static void Op2D9A(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[9];
}

static void Op2DAA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[10];
}

static void Op2DBA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[11];
}

static void Op2DCA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[12];
}

static void Op2DDA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[13];
}

static void Op2DEA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[14];
}

static void Op2DFA(unsigned short /*opcode*/)
{
	sh2->r[13] ^= sh2->r[15];
}

static void Op2E0A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[0];
}

static void Op2E1A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[1];
}

static void Op2E2A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[2];
}

static void Op2E3A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[3];
}

static void Op2E4A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[4];
}

static void Op2E5A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[5];
}

static void Op2E6A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[6];
}

static void Op2E7A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[7];
}

static void Op2E8A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[8];
}

static void Op2E9A(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[9];
}

static void Op2EAA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[10];
}

static void Op2EBA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[11];
}

static void Op2ECA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[12];
}

static void Op2EDA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[13];
}

static void Op2EEA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[14];
}

static void Op2EFA(unsigned short /*opcode*/)
{
	sh2->r[14] ^= sh2->r[15];
}

static void Op2F0A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[0];
}

static void Op2F1A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[1];
}

static void Op2F2A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[2];
}

static void Op2F3A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[3];
}

static void Op2F4A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[4];
}

static void Op2F5A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[5];
}

static void Op2F6A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[6];
}

static void Op2F7A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[7];
}

static void Op2F8A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[8];
}

static void Op2F9A(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[9];
}

static void Op2FAA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[10];
}

static void Op2FBA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[11];
}

static void Op2FCA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[12];
}

static void Op2FDA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[13];
}

static void Op2FEA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[14];
}

static void Op2FFA(unsigned short /*opcode*/)
{
	sh2->r[15] ^= sh2->r[15];
}

// OR Rm,Rn
static void Op200B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[0];
}

static void Op201B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[1];
}

static void Op202B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[2];
}

static void Op203B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[3];
}

static void Op204B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[4];
}

static void Op205B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[5];
}

static void Op206B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[6];
}

static void Op207B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[7];
}

static void Op208B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[8];
}

static void Op209B(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[9];
}

static void Op20AB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[10];
}

static void Op20BB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[11];
}

static void Op20CB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[12];
}

static void Op20DB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[13];
}

static void Op20EB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[14];
}

static void Op20FB(unsigned short /*opcode*/)
{
	sh2->r[0] |= sh2->r[15];
}

static void Op210B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[0];
}

static void Op211B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[1];
}

static void Op212B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[2];
}

static void Op213B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[3];
}

static void Op214B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[4];
}

static void Op215B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[5];
}

static void Op216B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[6];
}

static void Op217B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[7];
}

static void Op218B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[8];
}

static void Op219B(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[9];
}

static void Op21AB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[10];
}

static void Op21BB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[11];
}

static void Op21CB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[12];
}

static void Op21DB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[13];
}

static void Op21EB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[14];
}

static void Op21FB(unsigned short /*opcode*/)
{
	sh2->r[1] |= sh2->r[15];
}

static void Op220B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[0];
}

static void Op221B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[1];
}

static void Op222B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[2];
}

static void Op223B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[3];
}

static void Op224B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[4];
}

static void Op225B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[5];
}

static void Op226B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[6];
}

static void Op227B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[7];
}

static void Op228B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[8];
}

static void Op229B(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[9];
}

static void Op22AB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[10];
}

static void Op22BB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[11];
}

static void Op22CB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[12];
}

static void Op22DB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[13];
}

static void Op22EB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[14];
}

static void Op22FB(unsigned short /*opcode*/)
{
	sh2->r[2] |= sh2->r[15];
}

static void Op230B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[0];
}

static void Op231B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[1];
}

static void Op232B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[2];
}

static void Op233B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[3];
}

static void Op234B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[4];
}

static void Op235B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[5];
}

static void Op236B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[6];
}

static void Op237B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[7];
}

static void Op238B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[8];
}

static void Op239B(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[9];
}

static void Op23AB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[10];
}

static void Op23BB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[11];
}

static void Op23CB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[12];
}

static void Op23DB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[13];
}

static void Op23EB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[14];
}

static void Op23FB(unsigned short /*opcode*/)
{
	sh2->r[3] |= sh2->r[15];
}

static void Op240B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[0];
}

static void Op241B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[1];
}

static void Op242B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[2];
}

static void Op243B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[3];
}

static void Op244B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[4];
}

static void Op245B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[5];
}

static void Op246B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[6];
}

static void Op247B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[7];
}

static void Op248B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[8];
}

static void Op249B(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[9];
}

static void Op24AB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[10];
}

static void Op24BB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[11];
}

static void Op24CB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[12];
}

static void Op24DB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[13];
}

static void Op24EB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[14];
}

static void Op24FB(unsigned short /*opcode*/)
{
	sh2->r[4] |= sh2->r[15];
}

static void Op250B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[0];
}

static void Op251B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[1];
}

static void Op252B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[2];
}

static void Op253B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[3];
}

static void Op254B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[4];
}

static void Op255B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[5];
}

static void Op256B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[6];
}

static void Op257B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[7];
}

static void Op258B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[8];
}

static void Op259B(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[9];
}

static void Op25AB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[10];
}

static void Op25BB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[11];
}

static void Op25CB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[12];
}

static void Op25DB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[13];
}

static void Op25EB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[14];
}

static void Op25FB(unsigned short /*opcode*/)
{
	sh2->r[5] |= sh2->r[15];
}

static void Op260B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[0];
}

static void Op261B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[1];
}

static void Op262B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[2];
}

static void Op263B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[3];
}

static void Op264B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[4];
}

static void Op265B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[5];
}

static void Op266B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[6];
}

static void Op267B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[7];
}

static void Op268B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[8];
}

static void Op269B(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[9];
}

static void Op26AB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[10];
}

static void Op26BB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[11];
}

static void Op26CB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[12];
}

static void Op26DB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[13];
}

static void Op26EB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[14];
}

static void Op26FB(unsigned short /*opcode*/)
{
	sh2->r[6] |= sh2->r[15];
}

static void Op270B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[0];
}

static void Op271B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[1];
}

static void Op272B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[2];
}

static void Op273B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[3];
}

static void Op274B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[4];
}

static void Op275B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[5];
}

static void Op276B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[6];
}

static void Op277B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[7];
}

static void Op278B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[8];
}

static void Op279B(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[9];
}

static void Op27AB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[10];
}

static void Op27BB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[11];
}

static void Op27CB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[12];
}

static void Op27DB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[13];
}

static void Op27EB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[14];
}

static void Op27FB(unsigned short /*opcode*/)
{
	sh2->r[7] |= sh2->r[15];
}

static void Op280B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[0];
}

static void Op281B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[1];
}

static void Op282B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[2];
}

static void Op283B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[3];
}

static void Op284B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[4];
}

static void Op285B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[5];
}

static void Op286B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[6];
}

static void Op287B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[7];
}

static void Op288B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[8];
}

static void Op289B(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[9];
}

static void Op28AB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[10];
}

static void Op28BB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[11];
}

static void Op28CB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[12];
}

static void Op28DB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[13];
}

static void Op28EB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[14];
}

static void Op28FB(unsigned short /*opcode*/)
{
	sh2->r[8] |= sh2->r[15];
}

static void Op290B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[0];
}

static void Op291B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[1];
}

static void Op292B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[2];
}

static void Op293B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[3];
}

static void Op294B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[4];
}

static void Op295B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[5];
}

static void Op296B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[6];
}

static void Op297B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[7];
}

static void Op298B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[8];
}

static void Op299B(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[9];
}

static void Op29AB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[10];
}

static void Op29BB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[11];
}

static void Op29CB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[12];
}

static void Op29DB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[13];
}

static void Op29EB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[14];
}

static void Op29FB(unsigned short /*opcode*/)
{
	sh2->r[9] |= sh2->r[15];
}

static void Op2A0B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[0];
}

static void Op2A1B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[1];
}

static void Op2A2B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[2];
}

static void Op2A3B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[3];
}

static void Op2A4B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[4];
}

static void Op2A5B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[5];
}

static void Op2A6B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[6];
}

static void Op2A7B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[7];
}

static void Op2A8B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[8];
}

static void Op2A9B(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[9];
}

static void Op2AAB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[10];
}

static void Op2ABB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[11];
}

static void Op2ACB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[12];
}

static void Op2ADB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[13];
}

static void Op2AEB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[14];
}

static void Op2AFB(unsigned short /*opcode*/)
{
	sh2->r[10] |= sh2->r[15];
}

static void Op2B0B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[0];
}

static void Op2B1B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[1];
}

static void Op2B2B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[2];
}

static void Op2B3B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[3];
}

static void Op2B4B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[4];
}

static void Op2B5B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[5];
}

static void Op2B6B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[6];
}

static void Op2B7B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[7];
}

static void Op2B8B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[8];
}

static void Op2B9B(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[9];
}

static void Op2BAB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[10];
}

static void Op2BBB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[11];
}

static void Op2BCB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[12];
}

static void Op2BDB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[13];
}

static void Op2BEB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[14];
}

static void Op2BFB(unsigned short /*opcode*/)
{
	sh2->r[11] |= sh2->r[15];
}

static void Op2C0B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[0];
}

static void Op2C1B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[1];
}

static void Op2C2B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[2];
}

static void Op2C3B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[3];
}

static void Op2C4B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[4];
}

static void Op2C5B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[5];
}

static void Op2C6B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[6];
}

static void Op2C7B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[7];
}

static void Op2C8B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[8];
}

static void Op2C9B(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[9];
}

static void Op2CAB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[10];
}

static void Op2CBB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[11];
}

static void Op2CCB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[12];
}

static void Op2CDB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[13];
}

static void Op2CEB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[14];
}

static void Op2CFB(unsigned short /*opcode*/)
{
	sh2->r[12] |= sh2->r[15];
}

static void Op2D0B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[0];
}

static void Op2D1B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[1];
}

static void Op2D2B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[2];
}

static void Op2D3B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[3];
}

static void Op2D4B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[4];
}

static void Op2D5B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[5];
}

static void Op2D6B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[6];
}

static void Op2D7B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[7];
}

static void Op2D8B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[8];
}

static void Op2D9B(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[9];
}

static void Op2DAB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[10];
}

static void Op2DBB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[11];
}

static void Op2DCB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[12];
}

static void Op2DDB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[13];
}

static void Op2DEB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[14];
}

static void Op2DFB(unsigned short /*opcode*/)
{
	sh2->r[13] |= sh2->r[15];
}

static void Op2E0B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[0];
}

static void Op2E1B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[1];
}

static void Op2E2B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[2];
}

static void Op2E3B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[3];
}

static void Op2E4B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[4];
}

static void Op2E5B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[5];
}

static void Op2E6B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[6];
}

static void Op2E7B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[7];
}

static void Op2E8B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[8];
}

static void Op2E9B(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[9];
}

static void Op2EAB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[10];
}

static void Op2EBB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[11];
}

static void Op2ECB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[12];
}

static void Op2EDB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[13];
}

static void Op2EEB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[14];
}

static void Op2EFB(unsigned short /*opcode*/)
{
	sh2->r[14] |= sh2->r[15];
}

static void Op2F0B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[0];
}

static void Op2F1B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[1];
}

static void Op2F2B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[2];
}

static void Op2F3B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[3];
}

static void Op2F4B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[4];
}

static void Op2F5B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[5];
}

static void Op2F6B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[6];
}

static void Op2F7B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[7];
}

static void Op2F8B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[8];
}

static void Op2F9B(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[9];
}

static void Op2FAB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[10];
}

static void Op2FBB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[11];
}

static void Op2FCB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[12];
}

static void Op2FDB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[13];
}

static void Op2FEB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[14];
}

static void Op2FFB(unsigned short /*opcode*/)
{
	sh2->r[15] |= sh2->r[15];
}

// CMP_STR Rm,Rn
static void Op200C(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;
	UINT32 temp;
	INT32 HH, HL, LH, LL;
	temp = sh2->r[n] ^ sh2->r[m];
	HH = (temp >> 24) & 0xff;
	HL = (temp >> 16) & 0xff;
	LH = (temp >> 8) & 0xff;
	LL = temp & 0xff;
	if (HH && HL && LH && LL)
		sh2->sr &= ~T;
	else
		sh2->sr |= T;
}

// XTRCT Rm,Rn
static void Op200D(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;
	UINT32 temp;
	temp = (sh2->r[m] << 16) & 0xffff0000;
	sh2->r[n] = (sh2->r[n] >> 16) & 0x0000ffff;
	sh2->r[n] |= temp;
}

// MULU Rm,Rn
static void Op200E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[0];
}

static void Op201E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[1];
}

static void Op202E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[2];
}

static void Op203E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[3];
}

static void Op204E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[4];
}

static void Op205E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[5];
}

static void Op206E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[6];
}

static void Op207E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[7];
}

static void Op208E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[8];
}

static void Op209E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[9];
}

static void Op20AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[10];
}

static void Op20BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[11];
}

static void Op20CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[12];
}

static void Op20DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[13];
}

static void Op20EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[14];
}

static void Op20FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[0] * (UINT16) sh2->r[15];
}

static void Op210E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[0];
}

static void Op211E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[1];
}

static void Op212E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[2];
}

static void Op213E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[3];
}

static void Op214E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[4];
}

static void Op215E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[5];
}

static void Op216E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[6];
}

static void Op217E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[7];
}

static void Op218E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[8];
}

static void Op219E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[9];
}

static void Op21AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[10];
}

static void Op21BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[11];
}

static void Op21CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[12];
}

static void Op21DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[13];
}

static void Op21EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[14];
}

static void Op21FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[1] * (UINT16) sh2->r[15];
}

static void Op220E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[0];
}

static void Op221E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[1];
}

static void Op222E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[2];
}

static void Op223E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[3];
}

static void Op224E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[4];
}

static void Op225E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[5];
}

static void Op226E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[6];
}

static void Op227E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[7];
}

static void Op228E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[8];
}

static void Op229E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[9];
}

static void Op22AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[10];
}

static void Op22BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[11];
}

static void Op22CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[12];
}

static void Op22DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[13];
}

static void Op22EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[14];
}

static void Op22FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[2] * (UINT16) sh2->r[15];
}

static void Op230E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[0];
}

static void Op231E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[1];
}

static void Op232E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[2];
}

static void Op233E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[3];
}

static void Op234E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[4];
}

static void Op235E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[5];
}

static void Op236E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[6];
}

static void Op237E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[7];
}

static void Op238E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[8];
}

static void Op239E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[9];
}

static void Op23AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[10];
}

static void Op23BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[11];
}

static void Op23CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[12];
}

static void Op23DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[13];
}

static void Op23EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[14];
}

static void Op23FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[3] * (UINT16) sh2->r[15];
}

static void Op240E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[0];
}

static void Op241E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[1];
}

static void Op242E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[2];
}

static void Op243E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[3];
}

static void Op244E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[4];
}

static void Op245E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[5];
}

static void Op246E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[6];
}

static void Op247E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[7];
}

static void Op248E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[8];
}

static void Op249E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[9];
}

static void Op24AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[10];
}

static void Op24BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[11];
}

static void Op24CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[12];
}

static void Op24DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[13];
}

static void Op24EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[14];
}

static void Op24FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[4] * (UINT16) sh2->r[15];
}

static void Op250E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[0];
}

static void Op251E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[1];
}

static void Op252E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[2];
}

static void Op253E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[3];
}

static void Op254E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[4];
}

static void Op255E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[5];
}

static void Op256E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[6];
}

static void Op257E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[7];
}

static void Op258E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[8];
}

static void Op259E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[9];
}

static void Op25AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[10];
}

static void Op25BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[11];
}

static void Op25CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[12];
}

static void Op25DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[13];
}

static void Op25EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[14];
}

static void Op25FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[5] * (UINT16) sh2->r[15];
}

static void Op260E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[0];
}

static void Op261E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[1];
}

static void Op262E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[2];
}

static void Op263E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[3];
}

static void Op264E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[4];
}

static void Op265E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[5];
}

static void Op266E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[6];
}

static void Op267E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[7];
}

static void Op268E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[8];
}

static void Op269E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[9];
}

static void Op26AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[10];
}

static void Op26BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[11];
}

static void Op26CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[12];
}

static void Op26DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[13];
}

static void Op26EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[14];
}

static void Op26FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[6] * (UINT16) sh2->r[15];
}

static void Op270E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[0];
}

static void Op271E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[1];
}

static void Op272E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[2];
}

static void Op273E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[3];
}

static void Op274E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[4];
}

static void Op275E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[5];
}

static void Op276E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[6];
}

static void Op277E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[7];
}

static void Op278E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[8];
}

static void Op279E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[9];
}

static void Op27AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[10];
}

static void Op27BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[11];
}

static void Op27CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[12];
}

static void Op27DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[13];
}

static void Op27EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[14];
}

static void Op27FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[7] * (UINT16) sh2->r[15];
}

static void Op280E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[0];
}

static void Op281E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[1];
}

static void Op282E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[2];
}

static void Op283E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[3];
}

static void Op284E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[4];
}

static void Op285E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[5];
}

static void Op286E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[6];
}

static void Op287E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[7];
}

static void Op288E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[8];
}

static void Op289E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[9];
}

static void Op28AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[10];
}

static void Op28BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[11];
}

static void Op28CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[12];
}

static void Op28DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[13];
}

static void Op28EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[14];
}

static void Op28FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[8] * (UINT16) sh2->r[15];
}

static void Op290E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[0];
}

static void Op291E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[1];
}

static void Op292E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[2];
}

static void Op293E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[3];
}

static void Op294E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[4];
}

static void Op295E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[5];
}

static void Op296E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[6];
}

static void Op297E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[7];
}

static void Op298E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[8];
}

static void Op299E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[9];
}

static void Op29AE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[10];
}

static void Op29BE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[11];
}

static void Op29CE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[12];
}

static void Op29DE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[13];
}

static void Op29EE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[14];
}

static void Op29FE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[9] * (UINT16) sh2->r[15];
}

static void Op2A0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[0];
}

static void Op2A1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[1];
}

static void Op2A2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[2];
}

static void Op2A3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[3];
}

static void Op2A4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[4];
}

static void Op2A5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[5];
}

static void Op2A6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[6];
}

static void Op2A7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[7];
}

static void Op2A8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[8];
}

static void Op2A9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[9];
}

static void Op2AAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[10];
}

static void Op2ABE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[11];
}

static void Op2ACE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[12];
}

static void Op2ADE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[13];
}

static void Op2AEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[14];
}

static void Op2AFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[10] * (UINT16) sh2->r[15];
}

static void Op2B0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[0];
}

static void Op2B1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[1];
}

static void Op2B2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[2];
}

static void Op2B3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[3];
}

static void Op2B4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[4];
}

static void Op2B5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[5];
}

static void Op2B6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[6];
}

static void Op2B7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[7];
}

static void Op2B8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[8];
}

static void Op2B9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[9];
}

static void Op2BAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[10];
}

static void Op2BBE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[11];
}

static void Op2BCE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[12];
}

static void Op2BDE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[13];
}

static void Op2BEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[14];
}

static void Op2BFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[11] * (UINT16) sh2->r[15];
}

static void Op2C0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[0];
}

static void Op2C1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[1];
}

static void Op2C2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[2];
}

static void Op2C3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[3];
}

static void Op2C4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[4];
}

static void Op2C5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[5];
}

static void Op2C6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[6];
}

static void Op2C7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[7];
}

static void Op2C8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[8];
}

static void Op2C9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[9];
}

static void Op2CAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[10];
}

static void Op2CBE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[11];
}

static void Op2CCE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[12];
}

static void Op2CDE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[13];
}

static void Op2CEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[14];
}

static void Op2CFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[12] * (UINT16) sh2->r[15];
}

static void Op2D0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[0];
}

static void Op2D1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[1];
}

static void Op2D2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[2];
}

static void Op2D3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[3];
}

static void Op2D4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[4];
}

static void Op2D5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[5];
}

static void Op2D6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[6];
}

static void Op2D7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[7];
}

static void Op2D8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[8];
}

static void Op2D9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[9];
}

static void Op2DAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[10];
}

static void Op2DBE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[11];
}

static void Op2DCE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[12];
}

static void Op2DDE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[13];
}

static void Op2DEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[14];
}

static void Op2DFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[13] * (UINT16) sh2->r[15];
}

static void Op2E0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[0];
}

static void Op2E1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[1];
}

static void Op2E2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[2];
}

static void Op2E3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[3];
}

static void Op2E4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[4];
}

static void Op2E5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[5];
}

static void Op2E6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[6];
}

static void Op2E7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[7];
}

static void Op2E8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[8];
}

static void Op2E9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[9];
}

static void Op2EAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[10];
}

static void Op2EBE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[11];
}

static void Op2ECE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[12];
}

static void Op2EDE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[13];
}

static void Op2EEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[14];
}

static void Op2EFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[14] * (UINT16) sh2->r[15];
}

static void Op2F0E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[0];
}

static void Op2F1E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[1];
}

static void Op2F2E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[2];
}

static void Op2F3E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[3];
}

static void Op2F4E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[4];
}

static void Op2F5E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[5];
}

static void Op2F6E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[6];
}

static void Op2F7E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[7];
}

static void Op2F8E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[8];
}

static void Op2F9E(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[9];
}

static void Op2FAE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[10];
}

static void Op2FBE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[11];
}

static void Op2FCE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[12];
}

static void Op2FDE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[13];
}

static void Op2FEE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[14];
}

static void Op2FFE(unsigned short /*opcode*/)
{
	sh2->macl = (UINT16) sh2->r[15] * (UINT16) sh2->r[15];
}

// MULS Rm,Rn
static void Op200F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[0];
}

static void Op201F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[1];
}

static void Op202F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[2];
}

static void Op203F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[3];
}

static void Op204F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[4];
}

static void Op205F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[5];
}

static void Op206F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[6];
}

static void Op207F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[7];
}

static void Op208F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[8];
}

static void Op209F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[9];
}

static void Op20AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[10];
}

static void Op20BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[11];
}

static void Op20CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[12];
}

static void Op20DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[13];
}

static void Op20EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[14];
}

static void Op20FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[0] * (INT16) sh2->r[15];
}

static void Op210F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[0];
}

static void Op211F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[1];
}

static void Op212F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[2];
}

static void Op213F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[3];
}

static void Op214F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[4];
}

static void Op215F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[5];
}

static void Op216F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[6];
}

static void Op217F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[7];
}

static void Op218F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[8];
}

static void Op219F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[9];
}

static void Op21AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[10];
}

static void Op21BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[11];
}

static void Op21CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[12];
}

static void Op21DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[13];
}

static void Op21EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[14];
}

static void Op21FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[1] * (INT16) sh2->r[15];
}

static void Op220F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[0];
}

static void Op221F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[1];
}

static void Op222F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[2];
}

static void Op223F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[3];
}

static void Op224F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[4];
}

static void Op225F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[5];
}

static void Op226F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[6];
}

static void Op227F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[7];
}

static void Op228F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[8];
}

static void Op229F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[9];
}

static void Op22AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[10];
}

static void Op22BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[11];
}

static void Op22CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[12];
}

static void Op22DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[13];
}

static void Op22EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[14];
}

static void Op22FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[2] * (INT16) sh2->r[15];
}

static void Op230F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[0];
}

static void Op231F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[1];
}

static void Op232F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[2];
}

static void Op233F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[3];
}

static void Op234F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[4];
}

static void Op235F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[5];
}

static void Op236F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[6];
}

static void Op237F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[7];
}

static void Op238F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[8];
}

static void Op239F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[9];
}

static void Op23AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[10];
}

static void Op23BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[11];
}

static void Op23CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[12];
}

static void Op23DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[13];
}

static void Op23EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[14];
}

static void Op23FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[3] * (INT16) sh2->r[15];
}

static void Op240F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[0];
}

static void Op241F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[1];
}

static void Op242F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[2];
}

static void Op243F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[3];
}

static void Op244F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[4];
}

static void Op245F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[5];
}

static void Op246F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[6];
}

static void Op247F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[7];
}

static void Op248F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[8];
}

static void Op249F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[9];
}

static void Op24AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[10];
}

static void Op24BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[11];
}

static void Op24CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[12];
}

static void Op24DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[13];
}

static void Op24EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[14];
}

static void Op24FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[4] * (INT16) sh2->r[15];
}

static void Op250F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[0];
}

static void Op251F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[1];
}

static void Op252F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[2];
}

static void Op253F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[3];
}

static void Op254F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[4];
}

static void Op255F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[5];
}

static void Op256F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[6];
}

static void Op257F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[7];
}

static void Op258F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[8];
}

static void Op259F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[9];
}

static void Op25AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[10];
}

static void Op25BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[11];
}

static void Op25CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[12];
}

static void Op25DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[13];
}

static void Op25EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[14];
}

static void Op25FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[5] * (INT16) sh2->r[15];
}

static void Op260F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[0];
}

static void Op261F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[1];
}

static void Op262F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[2];
}

static void Op263F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[3];
}

static void Op264F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[4];
}

static void Op265F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[5];
}

static void Op266F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[6];
}

static void Op267F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[7];
}

static void Op268F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[8];
}

static void Op269F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[9];
}

static void Op26AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[10];
}

static void Op26BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[11];
}

static void Op26CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[12];
}

static void Op26DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[13];
}

static void Op26EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[14];
}

static void Op26FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[6] * (INT16) sh2->r[15];
}

static void Op270F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[0];
}

static void Op271F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[1];
}

static void Op272F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[2];
}

static void Op273F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[3];
}

static void Op274F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[4];
}

static void Op275F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[5];
}

static void Op276F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[6];
}

static void Op277F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[7];
}

static void Op278F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[8];
}

static void Op279F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[9];
}

static void Op27AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[10];
}

static void Op27BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[11];
}

static void Op27CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[12];
}

static void Op27DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[13];
}

static void Op27EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[14];
}

static void Op27FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[7] * (INT16) sh2->r[15];
}

static void Op280F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[0];
}

static void Op281F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[1];
}

static void Op282F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[2];
}

static void Op283F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[3];
}

static void Op284F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[4];
}

static void Op285F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[5];
}

static void Op286F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[6];
}

static void Op287F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[7];
}

static void Op288F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[8];
}

static void Op289F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[9];
}

static void Op28AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[10];
}

static void Op28BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[11];
}

static void Op28CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[12];
}

static void Op28DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[13];
}

static void Op28EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[14];
}

static void Op28FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[8] * (INT16) sh2->r[15];
}

static void Op290F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[0];
}

static void Op291F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[1];
}

static void Op292F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[2];
}

static void Op293F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[3];
}

static void Op294F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[4];
}

static void Op295F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[5];
}

static void Op296F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[6];
}

static void Op297F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[7];
}

static void Op298F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[8];
}

static void Op299F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[9];
}

static void Op29AF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[10];
}

static void Op29BF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[11];
}

static void Op29CF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[12];
}

static void Op29DF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[13];
}

static void Op29EF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[14];
}

static void Op29FF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[9] * (INT16) sh2->r[15];
}

static void Op2A0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[0];
}

static void Op2A1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[1];
}

static void Op2A2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[2];
}

static void Op2A3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[3];
}

static void Op2A4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[4];
}

static void Op2A5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[5];
}

static void Op2A6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[6];
}

static void Op2A7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[7];
}

static void Op2A8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[8];
}

static void Op2A9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[9];
}

static void Op2AAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[10];
}

static void Op2ABF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[11];
}

static void Op2ACF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[12];
}

static void Op2ADF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[13];
}

static void Op2AEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[14];
}

static void Op2AFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[10] * (INT16) sh2->r[15];
}

static void Op2B0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[0];
}

static void Op2B1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[1];
}

static void Op2B2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[2];
}

static void Op2B3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[3];
}

static void Op2B4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[4];
}

static void Op2B5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[5];
}

static void Op2B6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[6];
}

static void Op2B7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[7];
}

static void Op2B8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[8];
}

static void Op2B9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[9];
}

static void Op2BAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[10];
}

static void Op2BBF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[11];
}

static void Op2BCF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[12];
}

static void Op2BDF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[13];
}

static void Op2BEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[14];
}

static void Op2BFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[11] * (INT16) sh2->r[15];
}

static void Op2C0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[0];
}

static void Op2C1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[1];
}

static void Op2C2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[2];
}

static void Op2C3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[3];
}

static void Op2C4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[4];
}

static void Op2C5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[5];
}

static void Op2C6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[6];
}

static void Op2C7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[7];
}

static void Op2C8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[8];
}

static void Op2C9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[9];
}

static void Op2CAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[10];
}

static void Op2CBF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[11];
}

static void Op2CCF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[12];
}

static void Op2CDF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[13];
}

static void Op2CEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[14];
}

static void Op2CFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[12] * (INT16) sh2->r[15];
}

static void Op2D0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[0];
}

static void Op2D1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[1];
}

static void Op2D2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[2];
}

static void Op2D3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[3];
}

static void Op2D4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[4];
}

static void Op2D5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[5];
}

static void Op2D6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[6];
}

static void Op2D7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[7];
}

static void Op2D8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[8];
}

static void Op2D9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[9];
}

static void Op2DAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[10];
}

static void Op2DBF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[11];
}

static void Op2DCF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[12];
}

static void Op2DDF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[13];
}

static void Op2DEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[14];
}

static void Op2DFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[13] * (INT16) sh2->r[15];
}

static void Op2E0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[0];
}

static void Op2E1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[1];
}

static void Op2E2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[2];
}

static void Op2E3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[3];
}

static void Op2E4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[4];
}

static void Op2E5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[5];
}

static void Op2E6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[6];
}

static void Op2E7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[7];
}

static void Op2E8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[8];
}

static void Op2E9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[9];
}

static void Op2EAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[10];
}

static void Op2EBF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[11];
}

static void Op2ECF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[12];
}

static void Op2EDF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[13];
}

static void Op2EEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[14];
}

static void Op2EFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[14] * (INT16) sh2->r[15];
}

static void Op2F0F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[0];
}

static void Op2F1F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[1];
}

static void Op2F2F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[2];
}

static void Op2F3F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[3];
}

static void Op2F4F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[4];
}

static void Op2F5F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[5];
}

static void Op2F6F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[6];
}

static void Op2F7F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[7];
}

static void Op2F8F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[8];
}

static void Op2F9F(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[9];
}

static void Op2FAF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[10];
}

static void Op2FBF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[11];
}

static void Op2FCF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[12];
}

static void Op2FDF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[13];
}

static void Op2FEF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[14];
}

static void Op2FFF(unsigned short /*opcode*/)
{
	sh2->macl = (INT16) sh2->r[15] * (INT16) sh2->r[15];
}

// CMP_EQ Rm,Rn
static void Op3000(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3010(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3020(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3030(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3040(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3050(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3060(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3070(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3080(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3090(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30A0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30B0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30C0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30D0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30E0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30F0(unsigned short /*opcode*/)
{
	if (sh2->r[0] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3100(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3110(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3120(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3130(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3140(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3150(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3160(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3170(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3180(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3190(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31A0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31B0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31C0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31D0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31E0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31F0(unsigned short /*opcode*/)
{
	if (sh2->r[1] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3200(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3210(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3220(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3230(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3240(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3250(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3260(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3270(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3280(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3290(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32A0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32B0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32C0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32D0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32E0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32F0(unsigned short /*opcode*/)
{
	if (sh2->r[2] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3300(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3310(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3320(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3330(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3340(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3350(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3360(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3370(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3380(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3390(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33A0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33B0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33C0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33D0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33E0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33F0(unsigned short /*opcode*/)
{
	if (sh2->r[3] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3400(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3410(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3420(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3430(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3440(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3450(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3460(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3470(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3480(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3490(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34A0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34B0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34C0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34D0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34E0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34F0(unsigned short /*opcode*/)
{
	if (sh2->r[4] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3500(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3510(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3520(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3530(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3540(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3550(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3560(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3570(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3580(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3590(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35A0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35B0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35C0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35D0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35E0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35F0(unsigned short /*opcode*/)
{
	if (sh2->r[5] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3600(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3610(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3620(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3630(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3640(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3650(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3660(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3670(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3680(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3690(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36A0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36B0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36C0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36D0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36E0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36F0(unsigned short /*opcode*/)
{
	if (sh2->r[6] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3700(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3710(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3720(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3730(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3740(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3750(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3760(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3770(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3780(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3790(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37A0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37B0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37C0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37D0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37E0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37F0(unsigned short /*opcode*/)
{
	if (sh2->r[7] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3800(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3810(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3820(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3830(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3840(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3850(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3860(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3870(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3880(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3890(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38A0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38B0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38C0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38D0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38E0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38F0(unsigned short /*opcode*/)
{
	if (sh2->r[8] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3900(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3910(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3920(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3930(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3940(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3950(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3960(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3970(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3980(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3990(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39A0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39B0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39C0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39D0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39E0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39F0(unsigned short /*opcode*/)
{
	if (sh2->r[9] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A00(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A10(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A20(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A30(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A40(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A50(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A60(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A70(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A80(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A90(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AA0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AB0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AC0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AD0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AE0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AF0(unsigned short /*opcode*/)
{
	if (sh2->r[10] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B00(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B10(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B20(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B30(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B40(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B50(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B60(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B70(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B80(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B90(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BA0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BB0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BC0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BD0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BE0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BF0(unsigned short /*opcode*/)
{
	if (sh2->r[11] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C00(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C10(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C20(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C30(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C40(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C50(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C60(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C70(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C80(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C90(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CA0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CB0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CC0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CD0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CE0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CF0(unsigned short /*opcode*/)
{
	if (sh2->r[12] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D00(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D10(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D20(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D30(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D40(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D50(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D60(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D70(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D80(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D90(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DA0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DB0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DC0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DD0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DE0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DF0(unsigned short /*opcode*/)
{
	if (sh2->r[13] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E00(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E10(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E20(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E30(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E40(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E50(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E60(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E70(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E80(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E90(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EA0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EB0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EC0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3ED0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EE0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EF0(unsigned short /*opcode*/)
{
	if (sh2->r[14] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F00(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F10(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F20(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F30(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F40(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F50(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F60(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F70(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F80(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F90(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FA0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FB0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FC0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FD0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FE0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FF0(unsigned short /*opcode*/)
{
	if (sh2->r[15] == sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// CMP_HS Rm,Rn
static void Op3002(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3012(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3022(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3032(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3042(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3052(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3062(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3072(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3082(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3092(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3102(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3112(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3122(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3132(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3142(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3152(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3162(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3172(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3182(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3192(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3202(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3212(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3222(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3232(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3242(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3252(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3262(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3272(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3282(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3292(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3302(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3312(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3322(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3332(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3342(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3352(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3362(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3372(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3382(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3392(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3402(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3412(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3422(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3432(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3442(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3452(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3462(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3472(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3482(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3492(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3502(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3512(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3522(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3532(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3542(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3552(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3562(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3572(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3582(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3592(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3602(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3612(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3622(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3632(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3642(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3652(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3662(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3672(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3682(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3692(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3702(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3712(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3722(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3732(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3742(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3752(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3762(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3772(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3782(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3792(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3802(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3812(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3822(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3832(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3842(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3852(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3862(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3872(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3882(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3892(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3902(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3912(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3922(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3932(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3942(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3952(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3962(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3972(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3982(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3992(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39A2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39B2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39C2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39D2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39E2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39F2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AD2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BD2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CD2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DD2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3ED2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F02(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F12(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F22(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F32(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F42(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F52(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F62(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F72(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F82(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F92(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FA2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FB2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FC2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FD2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FE2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FF2(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] >= (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// CMP_GE Rm,Rn
static void Op3003(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3013(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3023(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3033(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3043(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3053(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3063(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3073(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3083(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3093(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3103(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3113(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3123(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3133(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3143(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3153(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3163(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3173(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3183(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3193(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3203(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3213(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3223(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3233(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3243(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3253(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3263(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3273(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3283(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3293(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3303(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3313(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3323(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3333(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3343(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3353(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3363(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3373(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3383(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3393(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3403(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3413(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3423(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3433(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3443(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3453(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3463(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3473(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3483(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3493(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3503(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3513(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3523(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3533(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3543(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3553(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3563(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3573(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3583(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3593(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3603(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3613(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3623(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3633(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3643(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3653(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3663(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3673(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3683(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3693(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3703(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3713(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3723(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3733(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3743(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3753(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3763(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3773(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3783(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3793(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3803(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3813(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3823(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3833(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3843(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3853(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3863(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3873(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3883(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3893(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3903(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3913(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3923(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3933(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3943(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3953(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3963(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3973(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3983(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3993(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39A3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39B3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39C3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39D3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39E3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39F3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AD3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BD3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CD3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DD3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3ED3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F03(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F13(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F23(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F33(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F43(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F53(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F63(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F73(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F83(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F93(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FA3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FB3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FC3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FD3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FE3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FF3(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] >= (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// DIV1 Rm,Rn
static void Op3004(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 tmp0;
	UINT32 old_q;

	old_q = sh2->sr & Q;
	if (0x80000000 & sh2->r[n])
		sh2->sr |= Q;
	else
		sh2->sr &= ~Q;

	sh2->r[n] = (sh2->r[n] << 1) | (sh2->sr & T);

	if (!old_q)
	{
		if (!(sh2->sr & M))
		{
			tmp0 = sh2->r[n];
			sh2->r[n] -= sh2->r[m];
			if(!(sh2->sr & Q))
				if(sh2->r[n] > tmp0)
					sh2->sr |= Q;
				else
					sh2->sr &= ~Q;
			else
				if(sh2->r[n] > tmp0)
					sh2->sr &= ~Q;
				else
					sh2->sr |= Q;
		}
		else
		{
			tmp0 = sh2->r[n];
			sh2->r[n] += sh2->r[m];
			if(!(sh2->sr & Q))
			{
				if(sh2->r[n] < tmp0)
					sh2->sr &= ~Q;
				else
					sh2->sr |= Q;
			}
			else
			{
				if(sh2->r[n] < tmp0)
					sh2->sr |= Q;
				else
					sh2->sr &= ~Q;
			}
		}
	}
	else
	{
		if (!(sh2->sr & M))
		{
			tmp0 = sh2->r[n];
			sh2->r[n] += sh2->r[m];
			if(!(sh2->sr & Q))
				if(sh2->r[n] < tmp0)
					sh2->sr |= Q;
				else
					sh2->sr &= ~Q;
			else
				if(sh2->r[n] < tmp0)
					sh2->sr &= ~Q;
				else
					sh2->sr |= Q;
		}
		else
		{
			tmp0 = sh2->r[n];
			sh2->r[n] -= sh2->r[m];
			if(!(sh2->sr & Q))
				if(sh2->r[n] > tmp0)
					sh2->sr &= ~Q;
				else
					sh2->sr |= Q;
			else
				if(sh2->r[n] > tmp0)
					sh2->sr |= Q;
				else
					sh2->sr &= ~Q;
		}
	}

	tmp0 = (sh2->sr & (Q | M));
	if((!tmp0) || (tmp0 == 0x300)) /* if Q == M set T else clear T */
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// DMULU.L Rm,Rn
static void Op3005(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 RnL, RnH, RmL, RmH, Res0, Res1, Res2;
	UINT32 temp0, temp1, temp2, temp3;

	RnL = sh2->r[n] & 0x0000ffff;
	RnH = (sh2->r[n] >> 16) & 0x0000ffff;
	RmL = sh2->r[m] & 0x0000ffff;
	RmH = (sh2->r[m] >> 16) & 0x0000ffff;
	temp0 = RmL * RnL;
	temp1 = RmH * RnL;
	temp2 = RmL * RnH;
	temp3 = RmH * RnH;
	Res2 = 0;
	Res1 = temp1 + temp2;
	if (Res1 < temp1)
		Res2 += 0x00010000;
	temp1 = (Res1 << 16) & 0xffff0000;
	Res0 = temp0 + temp1;
	if (Res0 < temp0)
		Res2++;
	Res2 = Res2 + ((Res1 >> 16) & 0x0000ffff) + temp3;
	sh2->mach = Res2;
	sh2->macl = Res0;
	sh2->sh2_icount--;
}

// CMP_HI Rm,Rn
static void Op3006(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3016(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3026(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3036(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3046(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3056(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3066(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3076(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3086(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3096(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[0] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3106(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3116(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3126(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3136(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3146(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3156(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3166(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3176(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3186(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3196(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[1] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3206(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3216(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3226(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3236(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3246(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3256(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3266(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3276(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3286(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3296(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[2] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3306(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3316(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3326(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3336(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3346(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3356(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3366(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3376(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3386(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3396(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[3] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3406(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3416(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3426(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3436(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3446(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3456(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3466(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3476(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3486(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3496(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[4] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3506(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3516(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3526(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3536(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3546(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3556(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3566(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3576(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3586(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3596(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[5] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3606(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3616(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3626(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3636(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3646(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3656(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3666(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3676(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3686(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3696(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[6] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3706(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3716(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3726(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3736(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3746(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3756(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3766(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3776(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3786(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3796(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[7] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3806(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3816(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3826(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3836(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3846(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3856(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3866(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3876(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3886(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3896(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[8] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3906(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3916(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3926(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3936(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3946(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3956(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3966(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3976(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3986(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3996(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39A6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39B6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39C6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39D6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39E6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39F6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[9] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AD6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[10] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BD6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[11] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CD6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[12] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DD6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[13] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3ED6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[14] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F06(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F16(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F26(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F36(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F46(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F56(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F66(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F76(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F86(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F96(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FA6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FB6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FC6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FD6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FE6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FF6(unsigned short /*opcode*/)
{
	if ((UINT32) sh2->r[15] > (UINT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// CMP_GT Rm,Rn
static void Op3007(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3017(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3027(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3037(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3047(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3057(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3067(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3077(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3087(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3097(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op30F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[0] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3107(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3117(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3127(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3137(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3147(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3157(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3167(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3177(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3187(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3197(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op31F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[1] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3207(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3217(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3227(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3237(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3247(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3257(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3267(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3277(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3287(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3297(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op32F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[2] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3307(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3317(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3327(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3337(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3347(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3357(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3367(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3377(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3387(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3397(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op33F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[3] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3407(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3417(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3427(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3437(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3447(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3457(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3467(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3477(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3487(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3497(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op34F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[4] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3507(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3517(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3527(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3537(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3547(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3557(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3567(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3577(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3587(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3597(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op35F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[5] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3607(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3617(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3627(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3637(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3647(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3657(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3667(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3677(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3687(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3697(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op36F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[6] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3707(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3717(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3727(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3737(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3747(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3757(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3767(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3777(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3787(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3797(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op37F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[7] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3807(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3817(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3827(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3837(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3847(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3857(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3867(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3877(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3887(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3897(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op38F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[8] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3907(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3917(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3927(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3937(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3947(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3957(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3967(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3977(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3987(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3997(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39A7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39B7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39C7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39D7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39E7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op39F7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[9] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3A97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AD7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3AF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[10] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3B97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BD7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3BF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[11] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3C97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CD7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3CF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[12] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3D97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DD7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3DF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[13] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3E97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3ED7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3EF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[14] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F07(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[0])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F17(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[1])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F27(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[2])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F37(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[3])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F47(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[4])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F57(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[5])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F67(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[6])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F77(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[7])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F87(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[8])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3F97(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[9])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FA7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[10])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FB7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[11])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FC7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[12])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FD7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[13])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FE7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[14])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op3FF7(unsigned short /*opcode*/)
{
	if ((INT32) sh2->r[15] > (INT32) sh2->r[15])
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// SUB Rm,Rn
static void Op3008(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[0];
}

static void Op3018(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[1];
}

static void Op3028(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[2];
}

static void Op3038(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[3];
}

static void Op3048(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[4];
}

static void Op3058(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[5];
}

static void Op3068(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[6];
}

static void Op3078(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[7];
}

static void Op3088(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[8];
}

static void Op3098(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[9];
}

static void Op30A8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[10];
}

static void Op30B8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[11];
}

static void Op30C8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[12];
}

static void Op30D8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[13];
}

static void Op30E8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[14];
}

static void Op30F8(unsigned short /*opcode*/)
{
	sh2->r[0] -= sh2->r[15];
}

static void Op3108(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[0];
}

static void Op3118(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[1];
}

static void Op3128(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[2];
}

static void Op3138(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[3];
}

static void Op3148(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[4];
}

static void Op3158(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[5];
}

static void Op3168(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[6];
}

static void Op3178(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[7];
}

static void Op3188(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[8];
}

static void Op3198(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[9];
}

static void Op31A8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[10];
}

static void Op31B8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[11];
}

static void Op31C8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[12];
}

static void Op31D8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[13];
}

static void Op31E8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[14];
}

static void Op31F8(unsigned short /*opcode*/)
{
	sh2->r[1] -= sh2->r[15];
}

static void Op3208(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[0];
}

static void Op3218(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[1];
}

static void Op3228(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[2];
}

static void Op3238(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[3];
}

static void Op3248(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[4];
}

static void Op3258(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[5];
}

static void Op3268(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[6];
}

static void Op3278(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[7];
}

static void Op3288(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[8];
}

static void Op3298(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[9];
}

static void Op32A8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[10];
}

static void Op32B8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[11];
}

static void Op32C8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[12];
}

static void Op32D8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[13];
}

static void Op32E8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[14];
}

static void Op32F8(unsigned short /*opcode*/)
{
	sh2->r[2] -= sh2->r[15];
}

static void Op3308(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[0];
}

static void Op3318(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[1];
}

static void Op3328(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[2];
}

static void Op3338(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[3];
}

static void Op3348(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[4];
}

static void Op3358(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[5];
}

static void Op3368(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[6];
}

static void Op3378(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[7];
}

static void Op3388(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[8];
}

static void Op3398(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[9];
}

static void Op33A8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[10];
}

static void Op33B8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[11];
}

static void Op33C8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[12];
}

static void Op33D8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[13];
}

static void Op33E8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[14];
}

static void Op33F8(unsigned short /*opcode*/)
{
	sh2->r[3] -= sh2->r[15];
}

static void Op3408(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[0];
}

static void Op3418(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[1];
}

static void Op3428(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[2];
}

static void Op3438(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[3];
}

static void Op3448(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[4];
}

static void Op3458(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[5];
}

static void Op3468(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[6];
}

static void Op3478(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[7];
}

static void Op3488(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[8];
}

static void Op3498(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[9];
}

static void Op34A8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[10];
}

static void Op34B8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[11];
}

static void Op34C8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[12];
}

static void Op34D8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[13];
}

static void Op34E8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[14];
}

static void Op34F8(unsigned short /*opcode*/)
{
	sh2->r[4] -= sh2->r[15];
}

static void Op3508(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[0];
}

static void Op3518(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[1];
}

static void Op3528(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[2];
}

static void Op3538(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[3];
}

static void Op3548(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[4];
}

static void Op3558(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[5];
}

static void Op3568(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[6];
}

static void Op3578(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[7];
}

static void Op3588(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[8];
}

static void Op3598(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[9];
}

static void Op35A8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[10];
}

static void Op35B8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[11];
}

static void Op35C8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[12];
}

static void Op35D8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[13];
}

static void Op35E8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[14];
}

static void Op35F8(unsigned short /*opcode*/)
{
	sh2->r[5] -= sh2->r[15];
}

static void Op3608(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[0];
}

static void Op3618(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[1];
}

static void Op3628(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[2];
}

static void Op3638(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[3];
}

static void Op3648(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[4];
}

static void Op3658(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[5];
}

static void Op3668(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[6];
}

static void Op3678(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[7];
}

static void Op3688(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[8];
}

static void Op3698(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[9];
}

static void Op36A8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[10];
}

static void Op36B8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[11];
}

static void Op36C8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[12];
}

static void Op36D8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[13];
}

static void Op36E8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[14];
}

static void Op36F8(unsigned short /*opcode*/)
{
	sh2->r[6] -= sh2->r[15];
}

static void Op3708(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[0];
}

static void Op3718(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[1];
}

static void Op3728(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[2];
}

static void Op3738(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[3];
}

static void Op3748(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[4];
}

static void Op3758(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[5];
}

static void Op3768(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[6];
}

static void Op3778(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[7];
}

static void Op3788(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[8];
}

static void Op3798(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[9];
}

static void Op37A8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[10];
}

static void Op37B8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[11];
}

static void Op37C8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[12];
}

static void Op37D8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[13];
}

static void Op37E8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[14];
}

static void Op37F8(unsigned short /*opcode*/)
{
	sh2->r[7] -= sh2->r[15];
}

static void Op3808(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[0];
}

static void Op3818(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[1];
}

static void Op3828(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[2];
}

static void Op3838(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[3];
}

static void Op3848(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[4];
}

static void Op3858(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[5];
}

static void Op3868(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[6];
}

static void Op3878(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[7];
}

static void Op3888(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[8];
}

static void Op3898(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[9];
}

static void Op38A8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[10];
}

static void Op38B8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[11];
}

static void Op38C8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[12];
}

static void Op38D8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[13];
}

static void Op38E8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[14];
}

static void Op38F8(unsigned short /*opcode*/)
{
	sh2->r[8] -= sh2->r[15];
}

static void Op3908(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[0];
}

static void Op3918(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[1];
}

static void Op3928(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[2];
}

static void Op3938(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[3];
}

static void Op3948(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[4];
}

static void Op3958(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[5];
}

static void Op3968(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[6];
}

static void Op3978(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[7];
}

static void Op3988(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[8];
}

static void Op3998(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[9];
}

static void Op39A8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[10];
}

static void Op39B8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[11];
}

static void Op39C8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[12];
}

static void Op39D8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[13];
}

static void Op39E8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[14];
}

static void Op39F8(unsigned short /*opcode*/)
{
	sh2->r[9] -= sh2->r[15];
}

static void Op3A08(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[0];
}

static void Op3A18(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[1];
}

static void Op3A28(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[2];
}

static void Op3A38(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[3];
}

static void Op3A48(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[4];
}

static void Op3A58(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[5];
}

static void Op3A68(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[6];
}

static void Op3A78(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[7];
}

static void Op3A88(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[8];
}

static void Op3A98(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[9];
}

static void Op3AA8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[10];
}

static void Op3AB8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[11];
}

static void Op3AC8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[12];
}

static void Op3AD8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[13];
}

static void Op3AE8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[14];
}

static void Op3AF8(unsigned short /*opcode*/)
{
	sh2->r[10] -= sh2->r[15];
}

static void Op3B08(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[0];
}

static void Op3B18(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[1];
}

static void Op3B28(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[2];
}

static void Op3B38(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[3];
}

static void Op3B48(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[4];
}

static void Op3B58(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[5];
}

static void Op3B68(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[6];
}

static void Op3B78(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[7];
}

static void Op3B88(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[8];
}

static void Op3B98(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[9];
}

static void Op3BA8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[10];
}

static void Op3BB8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[11];
}

static void Op3BC8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[12];
}

static void Op3BD8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[13];
}

static void Op3BE8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[14];
}

static void Op3BF8(unsigned short /*opcode*/)
{
	sh2->r[11] -= sh2->r[15];
}

static void Op3C08(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[0];
}

static void Op3C18(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[1];
}

static void Op3C28(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[2];
}

static void Op3C38(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[3];
}

static void Op3C48(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[4];
}

static void Op3C58(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[5];
}

static void Op3C68(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[6];
}

static void Op3C78(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[7];
}

static void Op3C88(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[8];
}

static void Op3C98(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[9];
}

static void Op3CA8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[10];
}

static void Op3CB8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[11];
}

static void Op3CC8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[12];
}

static void Op3CD8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[13];
}

static void Op3CE8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[14];
}

static void Op3CF8(unsigned short /*opcode*/)
{
	sh2->r[12] -= sh2->r[15];
}

static void Op3D08(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[0];
}

static void Op3D18(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[1];
}

static void Op3D28(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[2];
}

static void Op3D38(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[3];
}

static void Op3D48(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[4];
}

static void Op3D58(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[5];
}

static void Op3D68(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[6];
}

static void Op3D78(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[7];
}

static void Op3D88(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[8];
}

static void Op3D98(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[9];
}

static void Op3DA8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[10];
}

static void Op3DB8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[11];
}

static void Op3DC8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[12];
}

static void Op3DD8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[13];
}

static void Op3DE8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[14];
}

static void Op3DF8(unsigned short /*opcode*/)
{
	sh2->r[13] -= sh2->r[15];
}

static void Op3E08(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[0];
}

static void Op3E18(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[1];
}

static void Op3E28(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[2];
}

static void Op3E38(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[3];
}

static void Op3E48(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[4];
}

static void Op3E58(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[5];
}

static void Op3E68(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[6];
}

static void Op3E78(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[7];
}

static void Op3E88(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[8];
}

static void Op3E98(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[9];
}

static void Op3EA8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[10];
}

static void Op3EB8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[11];
}

static void Op3EC8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[12];
}

static void Op3ED8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[13];
}

static void Op3EE8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[14];
}

static void Op3EF8(unsigned short /*opcode*/)
{
	sh2->r[14] -= sh2->r[15];
}

static void Op3F08(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[0];
}

static void Op3F18(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[1];
}

static void Op3F28(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[2];
}

static void Op3F38(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[3];
}

static void Op3F48(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[4];
}

static void Op3F58(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[5];
}

static void Op3F68(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[6];
}

static void Op3F78(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[7];
}

static void Op3F88(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[8];
}

static void Op3F98(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[9];
}

static void Op3FA8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[10];
}

static void Op3FB8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[11];
}

static void Op3FC8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[12];
}

static void Op3FD8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[13];
}

static void Op3FE8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[14];
}

static void Op3FF8(unsigned short /*opcode*/)
{
	sh2->r[15] -= sh2->r[15];
}

// SUBC Rm,Rn
static void Op300A(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 tmp0, tmp1;
	
	tmp1 = sh2->r[n] - sh2->r[m];
	tmp0 = sh2->r[n];
	sh2->r[n] = tmp1 - (sh2->sr & T);
	if (tmp0 < tmp1)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	if (tmp1 < sh2->r[n])
		sh2->sr |= T;
}

// SUBV Rm,Rn
static void Op300B(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	INT32 dest, src, ans;
	
	if ((INT32) sh2->r[n] >= 0)
		dest = 0;
	else
		dest = 1;
	if ((INT32) sh2->r[m] >= 0)
		src = 0;
	else
		src = 1;
	src += dest;
	sh2->r[n] -= sh2->r[m];
	if ((INT32) sh2->r[n] >= 0)
		ans = 0;
	else
		ans = 1;
	ans += dest;
	if (src == 1)
	{
		if (ans == 1)
			sh2->sr |= T;
		else
			sh2->sr &= ~T;
	}
	else
		sh2->sr &= ~T;
}

// ADD Rm,Rn
static void Op300C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[0];
}

static void Op301C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[1];
}

static void Op302C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[2];
}

static void Op303C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[3];
}

static void Op304C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[4];
}

static void Op305C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[5];
}

static void Op306C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[6];
}

static void Op307C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[7];
}

static void Op308C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[8];
}

static void Op309C(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[9];
}

static void Op30AC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[10];
}

static void Op30BC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[11];
}

static void Op30CC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[12];
}

static void Op30DC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[13];
}

static void Op30EC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[14];
}

static void Op30FC(unsigned short /*opcode*/)
{
	sh2->r[0] += sh2->r[15];
}

static void Op310C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[0];
}

static void Op311C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[1];
}

static void Op312C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[2];
}

static void Op313C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[3];
}

static void Op314C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[4];
}

static void Op315C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[5];
}

static void Op316C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[6];
}

static void Op317C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[7];
}

static void Op318C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[8];
}

static void Op319C(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[9];
}

static void Op31AC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[10];
}

static void Op31BC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[11];
}

static void Op31CC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[12];
}

static void Op31DC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[13];
}

static void Op31EC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[14];
}

static void Op31FC(unsigned short /*opcode*/)
{
	sh2->r[1] += sh2->r[15];
}

static void Op320C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[0];
}

static void Op321C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[1];
}

static void Op322C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[2];
}

static void Op323C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[3];
}

static void Op324C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[4];
}

static void Op325C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[5];
}

static void Op326C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[6];
}

static void Op327C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[7];
}

static void Op328C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[8];
}

static void Op329C(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[9];
}

static void Op32AC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[10];
}

static void Op32BC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[11];
}

static void Op32CC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[12];
}

static void Op32DC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[13];
}

static void Op32EC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[14];
}

static void Op32FC(unsigned short /*opcode*/)
{
	sh2->r[2] += sh2->r[15];
}

static void Op330C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[0];
}

static void Op331C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[1];
}

static void Op332C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[2];
}

static void Op333C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[3];
}

static void Op334C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[4];
}

static void Op335C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[5];
}

static void Op336C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[6];
}

static void Op337C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[7];
}

static void Op338C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[8];
}

static void Op339C(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[9];
}

static void Op33AC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[10];
}

static void Op33BC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[11];
}

static void Op33CC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[12];
}

static void Op33DC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[13];
}

static void Op33EC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[14];
}

static void Op33FC(unsigned short /*opcode*/)
{
	sh2->r[3] += sh2->r[15];
}

static void Op340C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[0];
}

static void Op341C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[1];
}

static void Op342C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[2];
}

static void Op343C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[3];
}

static void Op344C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[4];
}

static void Op345C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[5];
}

static void Op346C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[6];
}

static void Op347C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[7];
}

static void Op348C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[8];
}

static void Op349C(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[9];
}

static void Op34AC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[10];
}

static void Op34BC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[11];
}

static void Op34CC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[12];
}

static void Op34DC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[13];
}

static void Op34EC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[14];
}

static void Op34FC(unsigned short /*opcode*/)
{
	sh2->r[4] += sh2->r[15];
}

static void Op350C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[0];
}

static void Op351C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[1];
}

static void Op352C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[2];
}

static void Op353C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[3];
}

static void Op354C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[4];
}

static void Op355C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[5];
}

static void Op356C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[6];
}

static void Op357C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[7];
}

static void Op358C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[8];
}

static void Op359C(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[9];
}

static void Op35AC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[10];
}

static void Op35BC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[11];
}

static void Op35CC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[12];
}

static void Op35DC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[13];
}

static void Op35EC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[14];
}

static void Op35FC(unsigned short /*opcode*/)
{
	sh2->r[5] += sh2->r[15];
}

static void Op360C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[0];
}

static void Op361C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[1];
}

static void Op362C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[2];
}

static void Op363C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[3];
}

static void Op364C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[4];
}

static void Op365C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[5];
}

static void Op366C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[6];
}

static void Op367C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[7];
}

static void Op368C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[8];
}

static void Op369C(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[9];
}

static void Op36AC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[10];
}

static void Op36BC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[11];
}

static void Op36CC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[12];
}

static void Op36DC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[13];
}

static void Op36EC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[14];
}

static void Op36FC(unsigned short /*opcode*/)
{
	sh2->r[6] += sh2->r[15];
}

static void Op370C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[0];
}

static void Op371C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[1];
}

static void Op372C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[2];
}

static void Op373C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[3];
}

static void Op374C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[4];
}

static void Op375C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[5];
}

static void Op376C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[6];
}

static void Op377C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[7];
}

static void Op378C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[8];
}

static void Op379C(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[9];
}

static void Op37AC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[10];
}

static void Op37BC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[11];
}

static void Op37CC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[12];
}

static void Op37DC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[13];
}

static void Op37EC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[14];
}

static void Op37FC(unsigned short /*opcode*/)
{
	sh2->r[7] += sh2->r[15];
}

static void Op380C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[0];
}

static void Op381C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[1];
}

static void Op382C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[2];
}

static void Op383C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[3];
}

static void Op384C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[4];
}

static void Op385C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[5];
}

static void Op386C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[6];
}

static void Op387C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[7];
}

static void Op388C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[8];
}

static void Op389C(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[9];
}

static void Op38AC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[10];
}

static void Op38BC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[11];
}

static void Op38CC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[12];
}

static void Op38DC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[13];
}

static void Op38EC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[14];
}

static void Op38FC(unsigned short /*opcode*/)
{
	sh2->r[8] += sh2->r[15];
}

static void Op390C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[0];
}

static void Op391C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[1];
}

static void Op392C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[2];
}

static void Op393C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[3];
}

static void Op394C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[4];
}

static void Op395C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[5];
}

static void Op396C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[6];
}

static void Op397C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[7];
}

static void Op398C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[8];
}

static void Op399C(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[9];
}

static void Op39AC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[10];
}

static void Op39BC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[11];
}

static void Op39CC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[12];
}

static void Op39DC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[13];
}

static void Op39EC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[14];
}

static void Op39FC(unsigned short /*opcode*/)
{
	sh2->r[9] += sh2->r[15];
}

static void Op3A0C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[0];
}

static void Op3A1C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[1];
}

static void Op3A2C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[2];
}

static void Op3A3C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[3];
}

static void Op3A4C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[4];
}

static void Op3A5C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[5];
}

static void Op3A6C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[6];
}

static void Op3A7C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[7];
}

static void Op3A8C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[8];
}

static void Op3A9C(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[9];
}

static void Op3AAC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[10];
}

static void Op3ABC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[11];
}

static void Op3ACC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[12];
}

static void Op3ADC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[13];
}

static void Op3AEC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[14];
}

static void Op3AFC(unsigned short /*opcode*/)
{
	sh2->r[10] += sh2->r[15];
}

static void Op3B0C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[0];
}

static void Op3B1C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[1];
}

static void Op3B2C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[2];
}

static void Op3B3C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[3];
}

static void Op3B4C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[4];
}

static void Op3B5C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[5];
}

static void Op3B6C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[6];
}

static void Op3B7C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[7];
}

static void Op3B8C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[8];
}

static void Op3B9C(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[9];
}

static void Op3BAC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[10];
}

static void Op3BBC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[11];
}

static void Op3BCC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[12];
}

static void Op3BDC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[13];
}

static void Op3BEC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[14];
}

static void Op3BFC(unsigned short /*opcode*/)
{
	sh2->r[11] += sh2->r[15];
}

static void Op3C0C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[0];
}

static void Op3C1C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[1];
}

static void Op3C2C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[2];
}

static void Op3C3C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[3];
}

static void Op3C4C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[4];
}

static void Op3C5C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[5];
}

static void Op3C6C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[6];
}

static void Op3C7C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[7];
}

static void Op3C8C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[8];
}

static void Op3C9C(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[9];
}

static void Op3CAC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[10];
}

static void Op3CBC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[11];
}

static void Op3CCC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[12];
}

static void Op3CDC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[13];
}

static void Op3CEC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[14];
}

static void Op3CFC(unsigned short /*opcode*/)
{
	sh2->r[12] += sh2->r[15];
}

static void Op3D0C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[0];
}

static void Op3D1C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[1];
}

static void Op3D2C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[2];
}

static void Op3D3C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[3];
}

static void Op3D4C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[4];
}

static void Op3D5C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[5];
}

static void Op3D6C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[6];
}

static void Op3D7C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[7];
}

static void Op3D8C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[8];
}

static void Op3D9C(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[9];
}

static void Op3DAC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[10];
}

static void Op3DBC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[11];
}

static void Op3DCC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[12];
}

static void Op3DDC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[13];
}

static void Op3DEC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[14];
}

static void Op3DFC(unsigned short /*opcode*/)
{
	sh2->r[13] += sh2->r[15];
}

static void Op3E0C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[0];
}

static void Op3E1C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[1];
}

static void Op3E2C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[2];
}

static void Op3E3C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[3];
}

static void Op3E4C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[4];
}

static void Op3E5C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[5];
}

static void Op3E6C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[6];
}

static void Op3E7C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[7];
}

static void Op3E8C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[8];
}

static void Op3E9C(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[9];
}

static void Op3EAC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[10];
}

static void Op3EBC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[11];
}

static void Op3ECC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[12];
}

static void Op3EDC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[13];
}

static void Op3EEC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[14];
}

static void Op3EFC(unsigned short /*opcode*/)
{
	sh2->r[14] += sh2->r[15];
}

static void Op3F0C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[0];
}

static void Op3F1C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[1];
}

static void Op3F2C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[2];
}

static void Op3F3C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[3];
}

static void Op3F4C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[4];
}

static void Op3F5C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[5];
}

static void Op3F6C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[6];
}

static void Op3F7C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[7];
}

static void Op3F8C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[8];
}

static void Op3F9C(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[9];
}

static void Op3FAC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[10];
}

static void Op3FBC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[11];
}

static void Op3FCC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[12];
}

static void Op3FDC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[13];
}

static void Op3FEC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[14];
}

static void Op3FFC(unsigned short /*opcode*/)
{
	sh2->r[15] += sh2->r[15];
}

// DMULS.L Rm,Rn
static void Op300D(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 RnL, RnH, RmL, RmH, Res0, Res1, Res2;
	UINT32 temp0, temp1, temp2, temp3;
	INT32 tempm, tempn, fnLmL;
	
	tempn = (INT32) sh2->r[n];
	tempm = (INT32) sh2->r[m];
	if (tempn < 0)
		tempn = 0 - tempn;
	if (tempm < 0)
		tempm = 0 - tempm;
	if ((INT32) (sh2->r[n] ^ sh2->r[m]) < 0)
		fnLmL = -1;
	else
		fnLmL = 0;
	temp1 = (UINT32) tempn;
	temp2 = (UINT32) tempm;
	RnL = temp1 & 0x0000ffff;
	RnH = (temp1 >> 16) & 0x0000ffff;
	RmL = temp2 & 0x0000ffff;
	RmH = (temp2 >> 16) & 0x0000ffff;
	temp0 = RmL * RnL;
	temp1 = RmH * RnL;
	temp2 = RmL * RnH;
	temp3 = RmH * RnH;
	Res2 = 0;
	Res1 = temp1 + temp2;
	if (Res1 < temp1)
		Res2 += 0x00010000;
	temp1 = (Res1 << 16) & 0xffff0000;
	Res0 = temp0 + temp1;
	if (Res0 < temp0)
		Res2++;
	Res2 = Res2 + ((Res1 >> 16) & 0x0000ffff) + temp3;
	if (fnLmL < 0)
	{
		Res2 = ~Res2;
		if (Res0 == 0)
			Res2++;
		else
			Res0 = (~Res0) + 1;
	}
	sh2->mach = Res2;
	sh2->macl = Res0;
	sh2->sh2_icount--;
}

// ADDC Rm,Rn
static void Op300E(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	UINT32 tmp0, tmp1;
	
	tmp1 = sh2->r[n] + sh2->r[m];
	tmp0 = sh2->r[n];
	sh2->r[n] = tmp1 + (sh2->sr & T);
	if (tmp0 > tmp1)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	if (tmp1 > sh2->r[n])
		sh2->sr |= T;
}

// ADDV Rm,Rn
static void Op300F(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	INT32 dest, src, ans;
	
	if ((INT32) sh2->r[n] >= 0)
		dest = 0;
	else
		dest = 1;
	if ((INT32) sh2->r[m] >= 0)
		src = 0;
	else
		src = 1;
	src += dest;
	sh2->r[n] += sh2->r[m];
	if ((INT32) sh2->r[n] >= 0)
		ans = 0;
	else
		ans = 1;
	ans += dest;
	if (src == 0 || src == 2)
	{
		if (ans == 1)
			sh2->sr |= T;
		else
			sh2->sr &= ~T;
	}
	else
		sh2->sr &= ~T;
}

// SHAL Rn
static void Op4000(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[0] >> 31) & T);
	sh2->r[0] <<= 1;
}

static void Op4100(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[1] >> 31) & T);
	sh2->r[1] <<= 1;
}

static void Op4200(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[2] >> 31) & T);
	sh2->r[2] <<= 1;
}

static void Op4300(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[3] >> 31) & T);
	sh2->r[3] <<= 1;
}

static void Op4400(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[4] >> 31) & T);
	sh2->r[4] <<= 1;
}

static void Op4500(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[5] >> 31) & T);
	sh2->r[5] <<= 1;
}

static void Op4600(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[6] >> 31) & T);
	sh2->r[6] <<= 1;
}

static void Op4700(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[7] >> 31) & T);
	sh2->r[7] <<= 1;
}

static void Op4800(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[8] >> 31) & T);
	sh2->r[8] <<= 1;
}

static void Op4900(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[9] >> 31) & T);
	sh2->r[9] <<= 1;
}

static void Op4A00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[10] >> 31) & T);
	sh2->r[10] <<= 1;
}

static void Op4B00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[11] >> 31) & T);
	sh2->r[11] <<= 1;
}

static void Op4C00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[12] >> 31) & T);
	sh2->r[12] <<= 1;
}

static void Op4D00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[13] >> 31) & T);
	sh2->r[13] <<= 1;
}

static void Op4E00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[14] >> 31) & T);
	sh2->r[14] <<= 1;
}

static void Op4F00(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[15] >> 31) & T);
	sh2->r[15] <<= 1;
}

// SHLR Rn
static void Op4001(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[0] & T);
	sh2->r[0] >>= 1;
}

static void Op4101(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[1] & T);
	sh2->r[1] >>= 1;
}

static void Op4201(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[2] & T);
	sh2->r[2] >>= 1;
}

static void Op4301(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[3] & T);
	sh2->r[3] >>= 1;
}

static void Op4401(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[4] & T);
	sh2->r[4] >>= 1;
}

static void Op4501(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[5] & T);
	sh2->r[5] >>= 1;
}

static void Op4601(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[6] & T);
	sh2->r[6] >>= 1;
}

static void Op4701(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[7] & T);
	sh2->r[7] >>= 1;
}

static void Op4801(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[8] & T);
	sh2->r[8] >>= 1;
}

static void Op4901(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[9] & T);
	sh2->r[9] >>= 1;
}

static void Op4A01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[10] & T);
	sh2->r[10] >>= 1;
}

static void Op4B01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[11] & T);
	sh2->r[11] >>= 1;
}

static void Op4C01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[12] & T);
	sh2->r[12] >>= 1;
}

static void Op4D01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[13] & T);
	sh2->r[13] >>= 1;
}

static void Op4E01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[14] & T);
	sh2->r[14] >>= 1;
}

static void Op4F01(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[15] & T);
	sh2->r[15] >>= 1;
}

// STS.L MACH,@-Rn
static void Op4002(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->mach );
}

static void Op4102(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->mach );
}

static void Op4202(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->mach );
}

static void Op4302(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->mach );
}

static void Op4402(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->mach );
}

static void Op4502(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->mach );
}

static void Op4602(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->mach );
}

static void Op4702(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->mach );
}

static void Op4802(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->mach );
}

static void Op4902(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->mach );
}

static void Op4A02(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->mach );
}

static void Op4B02(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->mach );
}

static void Op4C02(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->mach );
}

static void Op4D02(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->mach );
}

static void Op4E02(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->mach );
}

static void Op4F02(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->mach );
}

// STC.L SR,@-Rn
static void Op4003(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4103(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4203(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4303(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4403(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4503(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4603(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4703(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4803(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4903(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4A03(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4B03(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4C03(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4D03(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4E03(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

static void Op4F03(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->sr );
	sh2->sh2_icount--;
}

// ROTL Rn
static void Op4004(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[0] >> 31) & T);
	sh2->r[0] = (sh2->r[0] << 1) | (sh2->r[0] >> 31);
}

static void Op4104(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[1] >> 31) & T);
	sh2->r[1] = (sh2->r[1] << 1) | (sh2->r[1] >> 31);
}

static void Op4204(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[2] >> 31) & T);
	sh2->r[2] = (sh2->r[2] << 1) | (sh2->r[2] >> 31);
}

static void Op4304(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[3] >> 31) & T);
	sh2->r[3] = (sh2->r[3] << 1) | (sh2->r[3] >> 31);
}

static void Op4404(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[4] >> 31) & T);
	sh2->r[4] = (sh2->r[4] << 1) | (sh2->r[4] >> 31);
}

static void Op4504(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[5] >> 31) & T);
	sh2->r[5] = (sh2->r[5] << 1) | (sh2->r[5] >> 31);
}

static void Op4604(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[6] >> 31) & T);
	sh2->r[6] = (sh2->r[6] << 1) | (sh2->r[6] >> 31);
}

static void Op4704(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[7] >> 31) & T);
	sh2->r[7] = (sh2->r[7] << 1) | (sh2->r[7] >> 31);
}

static void Op4804(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[8] >> 31) & T);
	sh2->r[8] = (sh2->r[8] << 1) | (sh2->r[8] >> 31);
}

static void Op4904(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[9] >> 31) & T);
	sh2->r[9] = (sh2->r[9] << 1) | (sh2->r[9] >> 31);
}

static void Op4A04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[10] >> 31) & T);
	sh2->r[10] = (sh2->r[10] << 1) | (sh2->r[10] >> 31);
}

static void Op4B04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[11] >> 31) & T);
	sh2->r[11] = (sh2->r[11] << 1) | (sh2->r[11] >> 31);
}

static void Op4C04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[12] >> 31) & T);
	sh2->r[12] = (sh2->r[12] << 1) | (sh2->r[12] >> 31);
}

static void Op4D04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[13] >> 31) & T);
	sh2->r[13] = (sh2->r[13] << 1) | (sh2->r[13] >> 31);
}

static void Op4E04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[14] >> 31) & T);
	sh2->r[14] = (sh2->r[14] << 1) | (sh2->r[14] >> 31);
}

static void Op4F04(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[15] >> 31) & T);
	sh2->r[15] = (sh2->r[15] << 1) | (sh2->r[15] >> 31);
}

// ROTR Rn
static void Op4005(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[0] & T);
	sh2->r[0] = (sh2->r[0] >> 1) | (sh2->r[0] << 31);
}

static void Op4105(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[1] & T);
	sh2->r[1] = (sh2->r[1] >> 1) | (sh2->r[1] << 31);
}

static void Op4205(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[2] & T);
	sh2->r[2] = (sh2->r[2] >> 1) | (sh2->r[2] << 31);
}

static void Op4305(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[3] & T);
	sh2->r[3] = (sh2->r[3] >> 1) | (sh2->r[3] << 31);
}

static void Op4405(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[4] & T);
	sh2->r[4] = (sh2->r[4] >> 1) | (sh2->r[4] << 31);
}

static void Op4505(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[5] & T);
	sh2->r[5] = (sh2->r[5] >> 1) | (sh2->r[5] << 31);
}

static void Op4605(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[6] & T);
	sh2->r[6] = (sh2->r[6] >> 1) | (sh2->r[6] << 31);
}

static void Op4705(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[7] & T);
	sh2->r[7] = (sh2->r[7] >> 1) | (sh2->r[7] << 31);
}

static void Op4805(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[8] & T);
	sh2->r[8] = (sh2->r[8] >> 1) | (sh2->r[8] << 31);
}

static void Op4905(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[9] & T);
	sh2->r[9] = (sh2->r[9] >> 1) | (sh2->r[9] << 31);
}

static void Op4A05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[10] & T);
	sh2->r[10] = (sh2->r[10] >> 1) | (sh2->r[10] << 31);
}

static void Op4B05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[11] & T);
	sh2->r[11] = (sh2->r[11] >> 1) | (sh2->r[11] << 31);
}

static void Op4C05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[12] & T);
	sh2->r[12] = (sh2->r[12] >> 1) | (sh2->r[12] << 31);
}

static void Op4D05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[13] & T);
	sh2->r[13] = (sh2->r[13] >> 1) | (sh2->r[13] << 31);
}

static void Op4E05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[14] & T);
	sh2->r[14] = (sh2->r[14] >> 1) | (sh2->r[14] << 31);
}

static void Op4F05(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[15] & T);
	sh2->r[15] = (sh2->r[15] >> 1) | (sh2->r[15] << 31);
}

// LDS.L @Rn+,MACH
static void Op4006(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->mach = RL( sh2->ea );
	sh2->r[0] += 4;
}

static void Op4106(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->mach = RL( sh2->ea );
	sh2->r[1] += 4;
}

static void Op4206(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->mach = RL( sh2->ea );
	sh2->r[2] += 4;
}

static void Op4306(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->mach = RL( sh2->ea );
	sh2->r[3] += 4;
}

static void Op4406(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->mach = RL( sh2->ea );
	sh2->r[4] += 4;
}

static void Op4506(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->mach = RL( sh2->ea );
	sh2->r[5] += 4;
}

static void Op4606(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->mach = RL( sh2->ea );
	sh2->r[6] += 4;
}

static void Op4706(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->mach = RL( sh2->ea );
	sh2->r[7] += 4;
}

static void Op4806(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->mach = RL( sh2->ea );
	sh2->r[8] += 4;
}

static void Op4906(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->mach = RL( sh2->ea );
	sh2->r[9] += 4;
}

static void Op4A06(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->mach = RL( sh2->ea );
	sh2->r[10] += 4;
}

static void Op4B06(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->mach = RL( sh2->ea );
	sh2->r[11] += 4;
}

static void Op4C06(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->mach = RL( sh2->ea );
	sh2->r[12] += 4;
}

static void Op4D06(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->mach = RL( sh2->ea );
	sh2->r[13] += 4;
}

static void Op4E06(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->mach = RL( sh2->ea );
	sh2->r[14] += 4;
}

static void Op4F06(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->mach = RL( sh2->ea );
	sh2->r[15] += 4;
}

// LDC.L @Rn+,SR
static void Op4007(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[0] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4107(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[1] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4207(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[2] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4307(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[3] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4407(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[4] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4507(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[5] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4607(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[6] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4707(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[7] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4807(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[8] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4907(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[9] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4A07(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[10] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4B07(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[11] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4C07(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[12] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4D07(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[13] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4E07(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[14] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

static void Op4F07(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->sr = RL( sh2->ea ) & FLAGS;
	sh2->r[15] += 4;
	sh2->sh2_icount -= 2;
	sh2->test_irq = 1;
}

// SHLL2 Rn
static void Op4008(unsigned short opcode)
{
	sh2->r[0] <<= 2;
}

static void Op4108(unsigned short opcode)
{
	sh2->r[1] <<= 2;
}

static void Op4208(unsigned short opcode)
{
	sh2->r[2] <<= 2;
}

static void Op4308(unsigned short opcode)
{
	sh2->r[3] <<= 2;
}

static void Op4408(unsigned short opcode)
{
	sh2->r[4] <<= 2;
}

static void Op4508(unsigned short opcode)
{
	sh2->r[5] <<= 2;
}

static void Op4608(unsigned short opcode)
{
	sh2->r[6] <<= 2;
}

static void Op4708(unsigned short opcode)
{
	sh2->r[7] <<= 2;
}

static void Op4808(unsigned short opcode)
{
	sh2->r[8] <<= 2;
}

static void Op4908(unsigned short opcode)
{
	sh2->r[9] <<= 2;
}

static void Op4A08(unsigned short opcode)
{
	sh2->r[10] <<= 2;
}

static void Op4B08(unsigned short opcode)
{
	sh2->r[11] <<= 2;
}

static void Op4C08(unsigned short opcode)
{
	sh2->r[12] <<= 2;
}

static void Op4D08(unsigned short opcode)
{
	sh2->r[13] <<= 2;
}

static void Op4E08(unsigned short opcode)
{
	sh2->r[14] <<= 2;
}

static void Op4F08(unsigned short opcode)
{
	sh2->r[15] <<= 2;
}

// SHLR2 Rn
static void Op4009(unsigned short opcode)
{
	sh2->r[0] >>= 2;
}

static void Op4109(unsigned short opcode)
{
	sh2->r[1] >>= 2;
}

static void Op4209(unsigned short opcode)
{
	sh2->r[2] >>= 2;
}

static void Op4309(unsigned short opcode)
{
	sh2->r[3] >>= 2;
}

static void Op4409(unsigned short opcode)
{
	sh2->r[4] >>= 2;
}

static void Op4509(unsigned short opcode)
{
	sh2->r[5] >>= 2;
}

static void Op4609(unsigned short opcode)
{
	sh2->r[6] >>= 2;
}

static void Op4709(unsigned short opcode)
{
	sh2->r[7] >>= 2;
}

static void Op4809(unsigned short opcode)
{
	sh2->r[8] >>= 2;
}

static void Op4909(unsigned short opcode)
{
	sh2->r[9] >>= 2;
}

static void Op4A09(unsigned short opcode)
{
	sh2->r[10] >>= 2;
}

static void Op4B09(unsigned short opcode)
{
	sh2->r[11] >>= 2;
}

static void Op4C09(unsigned short opcode)
{
	sh2->r[12] >>= 2;
}

static void Op4D09(unsigned short opcode)
{
	sh2->r[13] >>= 2;
}

static void Op4E09(unsigned short opcode)
{
	sh2->r[14] >>= 2;
}

static void Op4F09(unsigned short opcode)
{
	sh2->r[15] >>= 2;
}

// LDS Rn,MACH
static void Op400A(unsigned short opcode)
{
	sh2->mach = sh2->r[0];
}

static void Op410A(unsigned short opcode)
{
	sh2->mach = sh2->r[1];
}

static void Op420A(unsigned short opcode)
{
	sh2->mach = sh2->r[2];
}

static void Op430A(unsigned short opcode)
{
	sh2->mach = sh2->r[3];
}

static void Op440A(unsigned short opcode)
{
	sh2->mach = sh2->r[4];
}

static void Op450A(unsigned short opcode)
{
	sh2->mach = sh2->r[5];
}

static void Op460A(unsigned short opcode)
{
	sh2->mach = sh2->r[6];
}

static void Op470A(unsigned short opcode)
{
	sh2->mach = sh2->r[7];
}

static void Op480A(unsigned short opcode)
{
	sh2->mach = sh2->r[8];
}

static void Op490A(unsigned short opcode)
{
	sh2->mach = sh2->r[9];
}

static void Op4A0A(unsigned short opcode)
{
	sh2->mach = sh2->r[10];
}

static void Op4B0A(unsigned short opcode)
{
	sh2->mach = sh2->r[11];
}

static void Op4C0A(unsigned short opcode)
{
	sh2->mach = sh2->r[12];
}

static void Op4D0A(unsigned short opcode)
{
	sh2->mach = sh2->r[13];
}

static void Op4E0A(unsigned short opcode)
{
	sh2->mach = sh2->r[14];
}

static void Op4F0A(unsigned short opcode)
{
	sh2->mach = sh2->r[15];
}

// JSR @Rn
static void Op400B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[0];
	sh2->sh2_icount--;
}

static void Op410B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[1];
	sh2->sh2_icount--;
}

static void Op420B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[2];
	sh2->sh2_icount--;
}

static void Op430B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[3];
	sh2->sh2_icount--;
}

static void Op440B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[4];
	sh2->sh2_icount--;
}

static void Op450B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[5];
	sh2->sh2_icount--;
}

static void Op460B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[6];
	sh2->sh2_icount--;
}

static void Op470B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[7];
	sh2->sh2_icount--;
}

static void Op480B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[8];
	sh2->sh2_icount--;
}

static void Op490B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[9];
	sh2->sh2_icount--;
}

static void Op4A0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[10];
	sh2->sh2_icount--;
}

static void Op4B0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[11];
	sh2->sh2_icount--;
}

static void Op4C0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[12];
	sh2->sh2_icount--;
}

static void Op4D0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[13];
	sh2->sh2_icount--;
}

static void Op4E0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[14];
	sh2->sh2_icount--;
}

static void Op4F0B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pr = sh2->pc + 2;
	sh2->pc = sh2->ea = sh2->r[15];
	sh2->sh2_icount--;
}

// LDC Rn,SR
static void Op400E(unsigned short opcode)
{
	sh2->sr = sh2->r[0] & FLAGS;
	sh2->test_irq = 1;
}

static void Op410E(unsigned short opcode)
{
	sh2->sr = sh2->r[1] & FLAGS;
	sh2->test_irq = 1;
}

static void Op420E(unsigned short opcode)
{
	sh2->sr = sh2->r[2] & FLAGS;
	sh2->test_irq = 1;
}

static void Op430E(unsigned short opcode)
{
	sh2->sr = sh2->r[3] & FLAGS;
	sh2->test_irq = 1;
}

static void Op440E(unsigned short opcode)
{
	sh2->sr = sh2->r[4] & FLAGS;
	sh2->test_irq = 1;
}

static void Op450E(unsigned short opcode)
{
	sh2->sr = sh2->r[5] & FLAGS;
	sh2->test_irq = 1;
}

static void Op460E(unsigned short opcode)
{
	sh2->sr = sh2->r[6] & FLAGS;
	sh2->test_irq = 1;
}

static void Op470E(unsigned short opcode)
{
	sh2->sr = sh2->r[7] & FLAGS;
	sh2->test_irq = 1;
}

static void Op480E(unsigned short opcode)
{
	sh2->sr = sh2->r[8] & FLAGS;
	sh2->test_irq = 1;
}

static void Op490E(unsigned short opcode)
{
	sh2->sr = sh2->r[9] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4A0E(unsigned short opcode)
{
	sh2->sr = sh2->r[10] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4B0E(unsigned short opcode)
{
	sh2->sr = sh2->r[11] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4C0E(unsigned short opcode)
{
	sh2->sr = sh2->r[12] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4D0E(unsigned short opcode)
{
	sh2->sr = sh2->r[13] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4E0E(unsigned short opcode)
{
	sh2->sr = sh2->r[14] & FLAGS;
	sh2->test_irq = 1;
}

static void Op4F0E(unsigned short opcode)
{
	sh2->sr = sh2->r[15] & FLAGS;
	sh2->test_irq = 1;
}

// MAC.W @Rm+,@Rn+
static void Op400F(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	unsigned int m = (opcode>>4) & 0x0f;

	INT32 tempm, tempn, dest, src, ans;
	UINT32 templ;

	tempn = (INT32) RW( sh2->r[n] );
	sh2->r[n] += 2;
	tempm = (INT32) RW( sh2->r[m] );
	sh2->r[m] += 2;
	templ = sh2->macl;
	tempm = ((INT32) (short) tempn * (INT32) (short) tempm);
	if ((INT32) sh2->macl >= 0)
		dest = 0;
	else
		dest = 1;
	if ((INT32) tempm >= 0)
	{
		src = 0;
		tempn = 0;
	}
	else
	{
		src = 1;
		tempn = 0xffffffff;
	}
	src += dest;
	sh2->macl += tempm;
	if ((INT32) sh2->macl >= 0)
		ans = 0;
	else
		ans = 1;
	ans += dest;
	if (sh2->sr & S)
	{
		if (ans == 1)
			{
				if (src == 0)
					sh2->macl = 0x7fffffff;
				if (src == 2)
					sh2->macl = 0x80000000;
			}
	}
	else
	{
		sh2->mach += tempn;
		if (templ > sh2->macl)
			sh2->mach += 1;
		}
	sh2->sh2_icount -= 2;
}

// DT Rn
static void Op4010(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	sh2->r[n]--;
	if (sh2->r[n] == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
#if BUSY_LOOP_HACKS
	{
		UINT32 next_opcode = OPRW(sh2->ppc & AM);
		if (next_opcode == 0x8bfd)
		{
			while (sh2->r[n] > 1 && sh2->sh2_icount > 4)
			{
				sh2->r[n]--;
				sh2->sh2_icount -= 4;
			}
		}
	}
#endif
}

// CMP_PZ Rn
static void Op4011(unsigned short opcode)
{
	if ((INT32) sh2->r[0] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4111(unsigned short opcode)
{
	if ((INT32) sh2->r[1] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4211(unsigned short opcode)
{
	if ((INT32) sh2->r[2] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4311(unsigned short opcode)
{
	if ((INT32) sh2->r[3] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4411(unsigned short opcode)
{
	if ((INT32) sh2->r[4] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4511(unsigned short opcode)
{
	if ((INT32) sh2->r[5] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4611(unsigned short opcode)
{
	if ((INT32) sh2->r[6] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4711(unsigned short opcode)
{
	if ((INT32) sh2->r[7] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4811(unsigned short opcode)
{
	if ((INT32) sh2->r[8] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4911(unsigned short opcode)
{
	if ((INT32) sh2->r[9] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4A11(unsigned short opcode)
{
	if ((INT32) sh2->r[10] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4B11(unsigned short opcode)
{
	if ((INT32) sh2->r[11] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4C11(unsigned short opcode)
{
	if ((INT32) sh2->r[12] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4D11(unsigned short opcode)
{
	if ((INT32) sh2->r[13] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4E11(unsigned short opcode)
{
	if ((INT32) sh2->r[14] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4F11(unsigned short opcode)
{
	if ((INT32) sh2->r[15] >= 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// STS.L MACL,@-Rn
static void Op4012(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->macl );
}

static void Op4112(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->macl );
}

static void Op4212(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->macl );
}

static void Op4312(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->macl );
}

static void Op4412(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->macl );
}

static void Op4512(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->macl );
}

static void Op4612(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->macl );
}

static void Op4712(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->macl );
}

static void Op4812(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->macl );
}

static void Op4912(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->macl );
}

static void Op4A12(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->macl );
}

static void Op4B12(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->macl );
}

static void Op4C12(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->macl );
}

static void Op4D12(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->macl );
}

static void Op4E12(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->macl );
}

static void Op4F12(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->macl );
}

// STC.L GBR,@-Rn
static void Op4013(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4113(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4213(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4313(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4413(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4513(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4613(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4713(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4813(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4913(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4A13(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4B13(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4C13(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4D13(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4E13(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

static void Op4F13(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->gbr );
	sh2->sh2_icount--;
}

// CMP_PL Rn
static void Op4015(unsigned short opcode)
{
	if ((INT32) sh2->r[0] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4115(unsigned short opcode)
{
	if ((INT32) sh2->r[1] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4215(unsigned short opcode)
{
	if ((INT32) sh2->r[2] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4315(unsigned short opcode)
{
	if ((INT32) sh2->r[3] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4415(unsigned short opcode)
{
	if ((INT32) sh2->r[4] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4515(unsigned short opcode)
{
	if ((INT32) sh2->r[5] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4615(unsigned short opcode)
{
	if ((INT32) sh2->r[6] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4715(unsigned short opcode)
{
	if ((INT32) sh2->r[7] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4815(unsigned short opcode)
{
	if ((INT32) sh2->r[8] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4915(unsigned short opcode)
{
	if ((INT32) sh2->r[9] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4A15(unsigned short opcode)
{
	if ((INT32) sh2->r[10] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4B15(unsigned short opcode)
{
	if ((INT32) sh2->r[11] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4C15(unsigned short opcode)
{
	if ((INT32) sh2->r[12] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4D15(unsigned short opcode)
{
	if ((INT32) sh2->r[13] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4E15(unsigned short opcode)
{
	if ((INT32) sh2->r[14] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

static void Op4F15(unsigned short opcode)
{
	if ((INT32) sh2->r[15] > 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
}

// LDS.L @Rn+,MACL
static void Op4016(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->macl = RL( sh2->ea );
	sh2->r[0] += 4;
}

static void Op4116(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->macl = RL( sh2->ea );
	sh2->r[1] += 4;
}

static void Op4216(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->macl = RL( sh2->ea );
	sh2->r[2] += 4;
}

static void Op4316(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->macl = RL( sh2->ea );
	sh2->r[3] += 4;
}

static void Op4416(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->macl = RL( sh2->ea );
	sh2->r[4] += 4;
}

static void Op4516(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->macl = RL( sh2->ea );
	sh2->r[5] += 4;
}

static void Op4616(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->macl = RL( sh2->ea );
	sh2->r[6] += 4;
}

static void Op4716(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->macl = RL( sh2->ea );
	sh2->r[7] += 4;
}

static void Op4816(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->macl = RL( sh2->ea );
	sh2->r[8] += 4;
}

static void Op4916(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->macl = RL( sh2->ea );
	sh2->r[9] += 4;
}

static void Op4A16(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->macl = RL( sh2->ea );
	sh2->r[10] += 4;
}

static void Op4B16(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->macl = RL( sh2->ea );
	sh2->r[11] += 4;
}

static void Op4C16(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->macl = RL( sh2->ea );
	sh2->r[12] += 4;
}

static void Op4D16(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->macl = RL( sh2->ea );
	sh2->r[13] += 4;
}

static void Op4E16(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->macl = RL( sh2->ea );
	sh2->r[14] += 4;
}

static void Op4F16(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->macl = RL( sh2->ea );
	sh2->r[15] += 4;
}

// LDC.L @Rm+,GBR
static void Op4017(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->gbr = RL( sh2->ea );
	sh2->r[0] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4117(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->gbr = RL( sh2->ea );
	sh2->r[1] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4217(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->gbr = RL( sh2->ea );
	sh2->r[2] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4317(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->gbr = RL( sh2->ea );
	sh2->r[3] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4417(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->gbr = RL( sh2->ea );
	sh2->r[4] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4517(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->gbr = RL( sh2->ea );
	sh2->r[5] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4617(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->gbr = RL( sh2->ea );
	sh2->r[6] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4717(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->gbr = RL( sh2->ea );
	sh2->r[7] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4817(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->gbr = RL( sh2->ea );
	sh2->r[8] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4917(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->gbr = RL( sh2->ea );
	sh2->r[9] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4A17(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->gbr = RL( sh2->ea );
	sh2->r[10] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4B17(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->gbr = RL( sh2->ea );
	sh2->r[11] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4C17(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->gbr = RL( sh2->ea );
	sh2->r[12] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4D17(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->gbr = RL( sh2->ea );
	sh2->r[13] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4E17(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->gbr = RL( sh2->ea );
	sh2->r[14] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4F17(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->gbr = RL( sh2->ea );
	sh2->r[15] += 4;
	sh2->sh2_icount -= 2;
}

// SHLL8 Rn
static void Op4018(unsigned short opcode)
{
	sh2->r[0] <<= 8;
}

static void Op4118(unsigned short opcode)
{
	sh2->r[1] <<= 8;
}

static void Op4218(unsigned short opcode)
{
	sh2->r[2] <<= 8;
}

static void Op4318(unsigned short opcode)
{
	sh2->r[3] <<= 8;
}

static void Op4418(unsigned short opcode)
{
	sh2->r[4] <<= 8;
}

static void Op4518(unsigned short opcode)
{
	sh2->r[5] <<= 8;
}

static void Op4618(unsigned short opcode)
{
	sh2->r[6] <<= 8;
}

static void Op4718(unsigned short opcode)
{
	sh2->r[7] <<= 8;
}

static void Op4818(unsigned short opcode)
{
	sh2->r[8] <<= 8;
}

static void Op4918(unsigned short opcode)
{
	sh2->r[9] <<= 8;
}

static void Op4A18(unsigned short opcode)
{
	sh2->r[10] <<= 8;
}

static void Op4B18(unsigned short opcode)
{
	sh2->r[11] <<= 8;
}

static void Op4C18(unsigned short opcode)
{
	sh2->r[12] <<= 8;
}

static void Op4D18(unsigned short opcode)
{
	sh2->r[13] <<= 8;
}

static void Op4E18(unsigned short opcode)
{
	sh2->r[14] <<= 8;
}

static void Op4F18(unsigned short opcode)
{
	sh2->r[15] <<= 8;
}

// SHLR8 Rn
static void Op4019(unsigned short opcode)
{
	sh2->r[0] >>= 8;
}

static void Op4119(unsigned short opcode)
{
	sh2->r[1] >>= 8;
}

static void Op4219(unsigned short opcode)
{
	sh2->r[2] >>= 8;
}

static void Op4319(unsigned short opcode)
{
	sh2->r[3] >>= 8;
}

static void Op4419(unsigned short opcode)
{
	sh2->r[4] >>= 8;
}

static void Op4519(unsigned short opcode)
{
	sh2->r[5] >>= 8;
}

static void Op4619(unsigned short opcode)
{
	sh2->r[6] >>= 8;
}

static void Op4719(unsigned short opcode)
{
	sh2->r[7] >>= 8;
}

static void Op4819(unsigned short opcode)
{
	sh2->r[8] >>= 8;
}

static void Op4919(unsigned short opcode)
{
	sh2->r[9] >>= 8;
}

static void Op4A19(unsigned short opcode)
{
	sh2->r[10] >>= 8;
}

static void Op4B19(unsigned short opcode)
{
	sh2->r[11] >>= 8;
}

static void Op4C19(unsigned short opcode)
{
	sh2->r[12] >>= 8;
}

static void Op4D19(unsigned short opcode)
{
	sh2->r[13] >>= 8;
}

static void Op4E19(unsigned short opcode)
{
	sh2->r[14] >>= 8;
}

static void Op4F19(unsigned short opcode)
{
	sh2->r[15] >>= 8;
}

// LDS Rn,MACL
static void Op401A(unsigned short opcode)
{
	sh2->macl = sh2->r[0];
}

static void Op411A(unsigned short opcode)
{
	sh2->macl = sh2->r[1];
}

static void Op421A(unsigned short opcode)
{
	sh2->macl = sh2->r[2];
}

static void Op431A(unsigned short opcode)
{
	sh2->macl = sh2->r[3];
}

static void Op441A(unsigned short opcode)
{
	sh2->macl = sh2->r[4];
}

static void Op451A(unsigned short opcode)
{
	sh2->macl = sh2->r[5];
}

static void Op461A(unsigned short opcode)
{
	sh2->macl = sh2->r[6];
}

static void Op471A(unsigned short opcode)
{
	sh2->macl = sh2->r[7];
}

static void Op481A(unsigned short opcode)
{
	sh2->macl = sh2->r[8];
}

static void Op491A(unsigned short opcode)
{
	sh2->macl = sh2->r[9];
}

static void Op4A1A(unsigned short opcode)
{
	sh2->macl = sh2->r[10];
}

static void Op4B1A(unsigned short opcode)
{
	sh2->macl = sh2->r[11];
}

static void Op4C1A(unsigned short opcode)
{
	sh2->macl = sh2->r[12];
}

static void Op4D1A(unsigned short opcode)
{
	sh2->macl = sh2->r[13];
}

static void Op4E1A(unsigned short opcode)
{
	sh2->macl = sh2->r[14];
}

static void Op4F1A(unsigned short opcode)
{
	sh2->macl = sh2->r[15];
}

// TAS.B @Rn
static void Op401B(unsigned short opcode)
{
	unsigned int n = (opcode>>8) & 0x0f;
	UINT32 temp;
	sh2->ea = sh2->r[n];
	temp = RB( sh2->ea );
	if (temp == 0)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	temp |= 0x80;
	WB( sh2->ea, temp );
	sh2->sh2_icount -= 3;
}

// LDC Rn,GBR
static void Op401E(unsigned short opcode)
{
	sh2->gbr = sh2->r[0];
}

static void Op411E(unsigned short opcode)
{
	sh2->gbr = sh2->r[1];
}

static void Op421E(unsigned short opcode)
{
	sh2->gbr = sh2->r[2];
}

static void Op431E(unsigned short opcode)
{
	sh2->gbr = sh2->r[3];
}

static void Op441E(unsigned short opcode)
{
	sh2->gbr = sh2->r[4];
}

static void Op451E(unsigned short opcode)
{
	sh2->gbr = sh2->r[5];
}

static void Op461E(unsigned short opcode)
{
	sh2->gbr = sh2->r[6];
}

static void Op471E(unsigned short opcode)
{
	sh2->gbr = sh2->r[7];
}

static void Op481E(unsigned short opcode)
{
	sh2->gbr = sh2->r[8];
}

static void Op491E(unsigned short opcode)
{
	sh2->gbr = sh2->r[9];
}

static void Op4A1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[10];
}

static void Op4B1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[11];
}

static void Op4C1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[12];
}

static void Op4D1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[13];
}

static void Op4E1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[14];
}

static void Op4F1E(unsigned short opcode)
{
	sh2->gbr = sh2->r[15];
}

// SHAL Rn
static void Op4020(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[0] >> 31) & T);
	sh2->r[0] <<= 1;
}

static void Op4120(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[1] >> 31) & T);
	sh2->r[1] <<= 1;
}

static void Op4220(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[2] >> 31) & T);
	sh2->r[2] <<= 1;
}

static void Op4320(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[3] >> 31) & T);
	sh2->r[3] <<= 1;
}

static void Op4420(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[4] >> 31) & T);
	sh2->r[4] <<= 1;
}

static void Op4520(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[5] >> 31) & T);
	sh2->r[5] <<= 1;
}

static void Op4620(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[6] >> 31) & T);
	sh2->r[6] <<= 1;
}

static void Op4720(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[7] >> 31) & T);
	sh2->r[7] <<= 1;
}

static void Op4820(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[8] >> 31) & T);
	sh2->r[8] <<= 1;
}

static void Op4920(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[9] >> 31) & T);
	sh2->r[9] <<= 1;
}

static void Op4A20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[10] >> 31) & T);
	sh2->r[10] <<= 1;
}

static void Op4B20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[11] >> 31) & T);
	sh2->r[11] <<= 1;
}

static void Op4C20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[12] >> 31) & T);
	sh2->r[12] <<= 1;
}

static void Op4D20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[13] >> 31) & T);
	sh2->r[13] <<= 1;
}

static void Op4E20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[14] >> 31) & T);
	sh2->r[14] <<= 1;
}

static void Op4F20(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | ((sh2->r[15] >> 31) & T);
	sh2->r[15] <<= 1;
}

// SHAR Rn
static void Op4021(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[0] & T);
	sh2->r[0] = (UINT32)((INT32)sh2->r[0] >> 1);
}

static void Op4121(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[1] & T);
	sh2->r[1] = (UINT32)((INT32)sh2->r[1] >> 1);
}

static void Op4221(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[2] & T);
	sh2->r[2] = (UINT32)((INT32)sh2->r[2] >> 1);
}

static void Op4321(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[3] & T);
	sh2->r[3] = (UINT32)((INT32)sh2->r[3] >> 1);
}

static void Op4421(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[4] & T);
	sh2->r[4] = (UINT32)((INT32)sh2->r[4] >> 1);
}

static void Op4521(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[5] & T);
	sh2->r[5] = (UINT32)((INT32)sh2->r[5] >> 1);
}

static void Op4621(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[6] & T);
	sh2->r[6] = (UINT32)((INT32)sh2->r[6] >> 1);
}

static void Op4721(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[7] & T);
	sh2->r[7] = (UINT32)((INT32)sh2->r[7] >> 1);
}

static void Op4821(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[8] & T);
	sh2->r[8] = (UINT32)((INT32)sh2->r[8] >> 1);
}

static void Op4921(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[9] & T);
	sh2->r[9] = (UINT32)((INT32)sh2->r[9] >> 1);
}

static void Op4A21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[10] & T);
	sh2->r[10] = (UINT32)((INT32)sh2->r[10] >> 1);
}

static void Op4B21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[11] & T);
	sh2->r[11] = (UINT32)((INT32)sh2->r[11] >> 1);
}

static void Op4C21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[12] & T);
	sh2->r[12] = (UINT32)((INT32)sh2->r[12] >> 1);
}

static void Op4D21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[13] & T);
	sh2->r[13] = (UINT32)((INT32)sh2->r[13] >> 1);
}

static void Op4E21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[14] & T);
	sh2->r[14] = (UINT32)((INT32)sh2->r[14] >> 1);
}

static void Op4F21(unsigned short opcode)
{
	sh2->sr = (sh2->sr & ~T) | (sh2->r[15] & T);
	sh2->r[15] = (UINT32)((INT32)sh2->r[15] >> 1);
}

// STS.L PR,@-Rn
static void Op4022(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->pr );
}

static void Op4122(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->pr );
}

static void Op4222(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->pr );
}

static void Op4322(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->pr );
}

static void Op4422(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->pr );
}

static void Op4522(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->pr );
}

static void Op4622(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->pr );
}

static void Op4722(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->pr );
}

static void Op4822(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->pr );
}

static void Op4922(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->pr );
}

static void Op4A22(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->pr );
}

static void Op4B22(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->pr );
}

static void Op4C22(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->pr );
}

static void Op4D22(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->pr );
}

static void Op4E22(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->pr );
}

static void Op4F22(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->pr );
}

// STC.L VBR,@-Rn
static void Op4023(unsigned short opcode)
{
	sh2->r[0] -= 4;
	sh2->ea = sh2->r[0];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4123(unsigned short opcode)
{
	sh2->r[1] -= 4;
	sh2->ea = sh2->r[1];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4223(unsigned short opcode)
{
	sh2->r[2] -= 4;
	sh2->ea = sh2->r[2];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4323(unsigned short opcode)
{
	sh2->r[3] -= 4;
	sh2->ea = sh2->r[3];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4423(unsigned short opcode)
{
	sh2->r[4] -= 4;
	sh2->ea = sh2->r[4];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4523(unsigned short opcode)
{
	sh2->r[5] -= 4;
	sh2->ea = sh2->r[5];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4623(unsigned short opcode)
{
	sh2->r[6] -= 4;
	sh2->ea = sh2->r[6];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4723(unsigned short opcode)
{
	sh2->r[7] -= 4;
	sh2->ea = sh2->r[7];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4823(unsigned short opcode)
{
	sh2->r[8] -= 4;
	sh2->ea = sh2->r[8];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4923(unsigned short opcode)
{
	sh2->r[9] -= 4;
	sh2->ea = sh2->r[9];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4A23(unsigned short opcode)
{
	sh2->r[10] -= 4;
	sh2->ea = sh2->r[10];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4B23(unsigned short opcode)
{
	sh2->r[11] -= 4;
	sh2->ea = sh2->r[11];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4C23(unsigned short opcode)
{
	sh2->r[12] -= 4;
	sh2->ea = sh2->r[12];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4D23(unsigned short opcode)
{
	sh2->r[13] -= 4;
	sh2->ea = sh2->r[13];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4E23(unsigned short opcode)
{
	sh2->r[14] -= 4;
	sh2->ea = sh2->r[14];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

static void Op4F23(unsigned short opcode)
{
	sh2->r[15] -= 4;
	sh2->ea = sh2->r[15];
	WL( sh2->ea, sh2->vbr );
	sh2->sh2_icount--;
}

// ROTCL Rn
static void Op4024(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[0] >> 31) & T;
	sh2->r[0] = (sh2->r[0] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4124(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[1] >> 31) & T;
	sh2->r[1] = (sh2->r[1] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4224(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[2] >> 31) & T;
	sh2->r[2] = (sh2->r[2] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4324(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[3] >> 31) & T;
	sh2->r[3] = (sh2->r[3] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4424(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[4] >> 31) & T;
	sh2->r[4] = (sh2->r[4] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4524(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[5] >> 31) & T;
	sh2->r[5] = (sh2->r[5] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4624(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[6] >> 31) & T;
	sh2->r[6] = (sh2->r[6] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4724(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[7] >> 31) & T;
	sh2->r[7] = (sh2->r[7] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4824(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[8] >> 31) & T;
	sh2->r[8] = (sh2->r[8] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4924(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[9] >> 31) & T;
	sh2->r[9] = (sh2->r[9] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4A24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[10] >> 31) & T;
	sh2->r[10] = (sh2->r[10] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4B24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[11] >> 31) & T;
	sh2->r[11] = (sh2->r[11] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4C24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[12] >> 31) & T;
	sh2->r[12] = (sh2->r[12] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4D24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[13] >> 31) & T;
	sh2->r[13] = (sh2->r[13] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4E24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[14] >> 31) & T;
	sh2->r[14] = (sh2->r[14] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

static void Op4F24(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->r[15] >> 31) & T;
	sh2->r[15] = (sh2->r[15] << 1) | (sh2->sr & T);
	sh2->sr = (sh2->sr & ~T) | temp;
}

// ROTCR Rn
static void Op4025(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[0] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[0] = (sh2->r[0] >> 1) | temp;
}

static void Op4125(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[1] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[1] = (sh2->r[1] >> 1) | temp;
}

static void Op4225(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[2] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[2] = (sh2->r[2] >> 1) | temp;
}

static void Op4325(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[3] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[3] = (sh2->r[3] >> 1) | temp;
}

static void Op4425(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[4] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[4] = (sh2->r[4] >> 1) | temp;
}

static void Op4525(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[5] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[5] = (sh2->r[5] >> 1) | temp;
}

static void Op4625(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[6] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[6] = (sh2->r[6] >> 1) | temp;
}

static void Op4725(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[7] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[7] = (sh2->r[7] >> 1) | temp;
}

static void Op4825(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[8] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[8] = (sh2->r[8] >> 1) | temp;
}

static void Op4925(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[9] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[9] = (sh2->r[9] >> 1) | temp;
}

static void Op4A25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[10] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[10] = (sh2->r[10] >> 1) | temp;
}

static void Op4B25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[11] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[11] = (sh2->r[11] >> 1) | temp;
}

static void Op4C25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[12] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[12] = (sh2->r[12] >> 1) | temp;
}

static void Op4D25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[13] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[13] = (sh2->r[13] >> 1) | temp;
}

static void Op4E25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[14] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[14] = (sh2->r[14] >> 1) | temp;
}

static void Op4F25(unsigned short opcode)
{
	UINT32 temp;
	temp = (sh2->sr & T) << 31;
	if (sh2->r[15] & T)
		sh2->sr |= T;
	else
		sh2->sr &= ~T;
	sh2->r[15] = (sh2->r[15] >> 1) | temp;
}

// LDS.L @Rn+,PR
static void Op4026(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->pr = RL( sh2->ea );
	sh2->r[0] += 4;
}

static void Op4126(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->pr = RL( sh2->ea );
	sh2->r[1] += 4;
}

static void Op4226(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->pr = RL( sh2->ea );
	sh2->r[2] += 4;
}

static void Op4326(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->pr = RL( sh2->ea );
	sh2->r[3] += 4;
}

static void Op4426(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->pr = RL( sh2->ea );
	sh2->r[4] += 4;
}

static void Op4526(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->pr = RL( sh2->ea );
	sh2->r[5] += 4;
}

static void Op4626(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->pr = RL( sh2->ea );
	sh2->r[6] += 4;
}

static void Op4726(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->pr = RL( sh2->ea );
	sh2->r[7] += 4;
}

static void Op4826(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->pr = RL( sh2->ea );
	sh2->r[8] += 4;
}

static void Op4926(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->pr = RL( sh2->ea );
	sh2->r[9] += 4;
}

static void Op4A26(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->pr = RL( sh2->ea );
	sh2->r[10] += 4;
}

static void Op4B26(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->pr = RL( sh2->ea );
	sh2->r[11] += 4;
}

static void Op4C26(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->pr = RL( sh2->ea );
	sh2->r[12] += 4;
}

static void Op4D26(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->pr = RL( sh2->ea );
	sh2->r[13] += 4;
}

static void Op4E26(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->pr = RL( sh2->ea );
	sh2->r[14] += 4;
}

static void Op4F26(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->pr = RL( sh2->ea );
	sh2->r[15] += 4;
}

// LDC.L @Rn+,VBR
static void Op4027(unsigned short opcode)
{
	sh2->ea = sh2->r[0];
	sh2->vbr = RL( sh2->ea );
	sh2->r[0] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4127(unsigned short opcode)
{
	sh2->ea = sh2->r[1];
	sh2->vbr = RL( sh2->ea );
	sh2->r[1] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4227(unsigned short opcode)
{
	sh2->ea = sh2->r[2];
	sh2->vbr = RL( sh2->ea );
	sh2->r[2] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4327(unsigned short opcode)
{
	sh2->ea = sh2->r[3];
	sh2->vbr = RL( sh2->ea );
	sh2->r[3] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4427(unsigned short opcode)
{
	sh2->ea = sh2->r[4];
	sh2->vbr = RL( sh2->ea );
	sh2->r[4] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4527(unsigned short opcode)
{
	sh2->ea = sh2->r[5];
	sh2->vbr = RL( sh2->ea );
	sh2->r[5] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4627(unsigned short opcode)
{
	sh2->ea = sh2->r[6];
	sh2->vbr = RL( sh2->ea );
	sh2->r[6] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4727(unsigned short opcode)
{
	sh2->ea = sh2->r[7];
	sh2->vbr = RL( sh2->ea );
	sh2->r[7] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4827(unsigned short opcode)
{
	sh2->ea = sh2->r[8];
	sh2->vbr = RL( sh2->ea );
	sh2->r[8] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4927(unsigned short opcode)
{
	sh2->ea = sh2->r[9];
	sh2->vbr = RL( sh2->ea );
	sh2->r[9] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4A27(unsigned short opcode)
{
	sh2->ea = sh2->r[10];
	sh2->vbr = RL( sh2->ea );
	sh2->r[10] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4B27(unsigned short opcode)
{
	sh2->ea = sh2->r[11];
	sh2->vbr = RL( sh2->ea );
	sh2->r[11] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4C27(unsigned short opcode)
{
	sh2->ea = sh2->r[12];
	sh2->vbr = RL( sh2->ea );
	sh2->r[12] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4D27(unsigned short opcode)
{
	sh2->ea = sh2->r[13];
	sh2->vbr = RL( sh2->ea );
	sh2->r[13] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4E27(unsigned short opcode)
{
	sh2->ea = sh2->r[14];
	sh2->vbr = RL( sh2->ea );
	sh2->r[14] += 4;
	sh2->sh2_icount -= 2;
}

static void Op4F27(unsigned short opcode)
{
	sh2->ea = sh2->r[15];
	sh2->vbr = RL( sh2->ea );
	sh2->r[15] += 4;
	sh2->sh2_icount -= 2;
}

// SHLL16 Rn
static void Op4028(unsigned short opcode)
{
	sh2->r[0] <<= 16;
}

static void Op4128(unsigned short opcode)
{
	sh2->r[1] <<= 16;
}

static void Op4228(unsigned short opcode)
{
	sh2->r[2] <<= 16;
}

static void Op4328(unsigned short opcode)
{
	sh2->r[3] <<= 16;
}

static void Op4428(unsigned short opcode)
{
	sh2->r[4] <<= 16;
}

static void Op4528(unsigned short opcode)
{
	sh2->r[5] <<= 16;
}

static void Op4628(unsigned short opcode)
{
	sh2->r[6] <<= 16;
}

static void Op4728(unsigned short opcode)
{
	sh2->r[7] <<= 16;
}

static void Op4828(unsigned short opcode)
{
	sh2->r[8] <<= 16;
}

static void Op4928(unsigned short opcode)
{
	sh2->r[9] <<= 16;
}

static void Op4A28(unsigned short opcode)
{
	sh2->r[10] <<= 16;
}

static void Op4B28(unsigned short opcode)
{
	sh2->r[11] <<= 16;
}

static void Op4C28(unsigned short opcode)
{
	sh2->r[12] <<= 16;
}

static void Op4D28(unsigned short opcode)
{
	sh2->r[13] <<= 16;
}

static void Op4E28(unsigned short opcode)
{
	sh2->r[14] <<= 16;
}

static void Op4F28(unsigned short opcode)
{
	sh2->r[15] <<= 16;
}

// SHLR16 Rn
static void Op4029(unsigned short opcode)
{
	sh2->r[0] >>= 16;
}

static void Op4129(unsigned short opcode)
{
	sh2->r[1] >>= 16;
}

static void Op4229(unsigned short opcode)
{
	sh2->r[2] >>= 16;
}

static void Op4329(unsigned short opcode)
{
	sh2->r[3] >>= 16;
}

static void Op4429(unsigned short opcode)
{
	sh2->r[4] >>= 16;
}

static void Op4529(unsigned short opcode)
{
	sh2->r[5] >>= 16;
}

static void Op4629(unsigned short opcode)
{
	sh2->r[6] >>= 16;
}

static void Op4729(unsigned short opcode)
{
	sh2->r[7] >>= 16;
}

static void Op4829(unsigned short opcode)
{
	sh2->r[8] >>= 16;
}

static void Op4929(unsigned short opcode)
{
	sh2->r[9] >>= 16;
}

static void Op4A29(unsigned short opcode)
{
	sh2->r[10] >>= 16;
}

static void Op4B29(unsigned short opcode)
{
	sh2->r[11] >>= 16;
}

static void Op4C29(unsigned short opcode)
{
	sh2->r[12] >>= 16;
}

static void Op4D29(unsigned short opcode)
{
	sh2->r[13] >>= 16;
}

static void Op4E29(unsigned short opcode)
{
	sh2->r[14] >>= 16;
}

static void Op4F29(unsigned short opcode)
{
	sh2->r[15] >>= 16;
}

// LDS Rn,PR
static void Op402A(unsigned short opcode)
{
	sh2->pr = sh2->r[0];
}

static void Op412A(unsigned short opcode)
{
	sh2->pr = sh2->r[1];
}

static void Op422A(unsigned short opcode)
{
	sh2->pr = sh2->r[2];
}

static void Op432A(unsigned short opcode)
{
	sh2->pr = sh2->r[3];
}

static void Op442A(unsigned short opcode)
{
	sh2->pr = sh2->r[4];
}

static void Op452A(unsigned short opcode)
{
	sh2->pr = sh2->r[5];
}

static void Op462A(unsigned short opcode)
{
	sh2->pr = sh2->r[6];
}

static void Op472A(unsigned short opcode)
{
	sh2->pr = sh2->r[7];
}

static void Op482A(unsigned short opcode)
{
	sh2->pr = sh2->r[8];
}

static void Op492A(unsigned short opcode)
{
	sh2->pr = sh2->r[9];
}

static void Op4A2A(unsigned short opcode)
{
	sh2->pr = sh2->r[10];
}

static void Op4B2A(unsigned short opcode)
{
	sh2->pr = sh2->r[11];
}

static void Op4C2A(unsigned short opcode)
{
	sh2->pr = sh2->r[12];
}

static void Op4D2A(unsigned short opcode)
{
	sh2->pr = sh2->r[13];
}

static void Op4E2A(unsigned short opcode)
{
	sh2->pr = sh2->r[14];
}

static void Op4F2A(unsigned short opcode)
{
	sh2->pr = sh2->r[15];
}

// JMP @Rn
static void Op402B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[0];
}

static void Op412B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[1];
}

static void Op422B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[2];
}

static void Op432B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[3];
}

static void Op442B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[4];
}

static void Op452B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[5];
}

static void Op462B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[6];
}

static void Op472B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[7];
}

static void Op482B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[8];
}

static void Op492B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[9];
}

static void Op4A2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[10];
}

static void Op4B2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[11];
}

static void Op4C2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[12];
}

static void Op4D2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[13];
}

static void Op4E2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[14];
}

static void Op4F2B(unsigned short opcode)
{
	sh2->delay = sh2->pc;
	sh2->pc = sh2->ea = sh2->r[15];
}

// LDC Rn,VBR
static void Op402E(unsigned short opcode)
{
	sh2->vbr = sh2->r[0];
}

static void Op412E(unsigned short opcode)
{
	sh2->vbr = sh2->r[1];
}

static void Op422E(unsigned short opcode)
{
	sh2->vbr = sh2->r[2];
}

static void Op432E(unsigned short opcode)
{
	sh2->vbr = sh2->r[3];
}

static void Op442E(unsigned short opcode)
{
	sh2->vbr = sh2->r[4];
}

static void Op452E(unsigned short opcode)
{
	sh2->vbr = sh2->r[5];
}

static void Op462E(unsigned short opcode)
{
	sh2->vbr = sh2->r[6];
}

static void Op472E(unsigned short opcode)
{
	sh2->vbr = sh2->r[7];
}

static void Op482E(unsigned short opcode)
{
	sh2->vbr = sh2->r[8];
}

static void Op492E(unsigned short opcode)
{
	sh2->vbr = sh2->r[9];
}

static void Op4A2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[10];
}

static void Op4B2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[11];
}

static void Op4C2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[12];
}

static void Op4D2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[13];
}

static void Op4E2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[14];
}

static void Op4F2E(unsigned short opcode)
{
	sh2->vbr = sh2->r[15];
}

// MOV.L @(disp4,Rm),Rn
static void Op5000(unsigned short opcode)
{
	sh2->ea = sh2->r[(opcode>>4) & 0x0f] + ((opcode<<2) & 0x3c);
	sh2->r[(opcode>>8) & 0x0f] = RL( sh2->ea );
}

// MOV.B @Rm,Rn
static void Op6000(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6010(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6020(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6030(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6040(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6050(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6060(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6070(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6080(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6090(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op60F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[0] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6100(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6110(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6120(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6130(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6140(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6150(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6160(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6170(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6180(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6190(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op61F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[1] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6200(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6210(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6220(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6230(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6240(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6250(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6260(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6270(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6280(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6290(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op62F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[2] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6300(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6310(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6320(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6330(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6340(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6350(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6360(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6370(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6380(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6390(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op63F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[3] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6400(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6410(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6420(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6430(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6440(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6450(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6460(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6470(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6480(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6490(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op64F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[4] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6500(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6510(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6520(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6530(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6540(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6550(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6560(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6570(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6580(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6590(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op65F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[5] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6600(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6610(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6620(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6630(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6640(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6650(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6660(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6670(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6680(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6690(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op66F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[6] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6700(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6710(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6720(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6730(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6740(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6750(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6760(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6770(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6780(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6790(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op67F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[7] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6800(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6810(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6820(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6830(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6840(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6850(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6860(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6870(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6880(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6890(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op68F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[8] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6900(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6910(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6920(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6930(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6940(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6950(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6960(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6970(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6980(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6990(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69A0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69B0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69C0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69D0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69E0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op69F0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[9] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6A90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6AF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[10] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6B90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6BF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[11] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6C90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6CF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[12] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6D90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6DF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[13] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6E90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6EA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6EB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6EC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6ED0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6EE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6EF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[14] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F00(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F10(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F20(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F30(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F40(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F50(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F60(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F70(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F80(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6F90(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FA0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FB0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FC0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FD0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FE0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

static void Op6FF0(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[15] = (UINT32)(INT32)(INT16)(INT8) RB( sh2->ea );
}

// MOV.W @Rm,Rn
static void Op6001(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6011(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6021(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6031(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6041(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6051(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6061(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6071(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6081(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6091(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op60F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[0] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6101(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6111(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6121(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6131(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6141(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6151(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6161(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6171(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6181(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6191(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op61F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[1] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6201(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6211(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6221(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6231(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6241(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6251(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6261(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6271(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6281(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6291(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op62F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[2] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6301(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6311(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6321(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6331(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6341(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6351(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6361(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6371(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6381(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6391(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op63F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[3] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6401(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6411(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6421(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6431(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6441(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6451(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6461(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6471(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6481(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6491(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op64F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[4] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6501(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6511(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6521(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6531(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6541(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6551(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6561(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6571(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6581(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6591(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op65F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[5] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6601(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6611(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6621(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6631(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6641(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6651(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6661(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6671(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6681(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6691(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op66F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[6] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6701(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6711(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6721(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6731(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6741(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6751(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6761(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6771(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6781(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6791(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op67F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[7] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6801(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6811(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6821(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6831(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6841(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6851(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6861(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6871(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6881(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6891(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op68F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[8] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6901(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6911(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6921(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6931(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6941(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6951(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6961(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6971(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6981(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6991(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69A1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69B1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69C1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69D1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69E1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op69F1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[9] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6A91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6AF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[10] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6B91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6BF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[11] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6C91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6CF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[12] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6D91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6DF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[13] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6E91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6EA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6EB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6EC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6ED1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6EE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6EF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[14] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F01(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F11(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F21(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F31(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F41(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F51(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F61(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F71(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F81(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6F91(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FA1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FB1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FC1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FD1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FE1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

static void Op6FF1(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[15] = (UINT32)(INT32)(INT16) RW( sh2->ea );
}

// MOV.L @Rm,Rn
static void Op6002(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6012(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6022(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6032(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6042(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6052(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6062(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6072(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6082(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6092(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[0] = RL( sh2->ea );
}

static void Op60F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[0] = RL( sh2->ea );
}

static void Op6102(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6112(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6122(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6132(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6142(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6152(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6162(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6172(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6182(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6192(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[1] = RL( sh2->ea );
}

static void Op61F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[1] = RL( sh2->ea );
}

static void Op6202(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6212(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6222(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6232(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6242(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6252(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6262(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6272(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6282(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6292(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[2] = RL( sh2->ea );
}

static void Op62F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[2] = RL( sh2->ea );
}

static void Op6302(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6312(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6322(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6332(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6342(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6352(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6362(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6372(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6382(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6392(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[3] = RL( sh2->ea );
}

static void Op63F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[3] = RL( sh2->ea );
}

static void Op6402(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6412(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6422(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6432(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6442(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6452(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6462(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6472(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6482(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6492(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[4] = RL( sh2->ea );
}

static void Op64F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[4] = RL( sh2->ea );
}

static void Op6502(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6512(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6522(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6532(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6542(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6552(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6562(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6572(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6582(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6592(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65A2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[10];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65B2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[11];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65C2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[12];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65D2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[13];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65E2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[14];
	sh2->r[5] = RL( sh2->ea );
}

static void Op65F2(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[15];
	sh2->r[5] = RL( sh2->ea );
}

static void Op6602(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[0];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6612(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[1];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6622(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[2];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6632(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[3];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6642(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[4];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6652(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[5];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6662(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[6];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6672(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[7];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6682(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[8];
	sh2->r[6] = RL( sh2->ea );
}

static void Op6692(unsigned short /*opcode*/)
{
	sh2->ea = sh2->r[9];
	sh2->r[6] = RL( sh2->ea );
}

static void Op66A2(unsigned short /*opcode*/)
{
}

{