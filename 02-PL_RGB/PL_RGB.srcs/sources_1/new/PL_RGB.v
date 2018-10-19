module PL_led(
    input sysclk,           //系统时钟125Mhz
	
	/* 板载两颗RGBLED */
    output  led4_b,		//RGB-B	
	output  led4_g,		//RGB-G	
	output  led4_r,		//RGB-R
	output  led5_b,		//RGB-B
	output  led5_g,		//RGB-G
	output  led5_r		//RGB-R
);
    reg [31:0]timer_cnt;    //定时计数器
	reg [2:0]rgb_state = 3'd0;
	
    always@(posedge sysclk)
    begin
        if(timer_cnt >= 32'd49_999_999)
        begin
            rgb_state <= rgb_state + 3'd1;
            timer_cnt <= 32'd0;
        end
        else
		begin
            rgb_state <= rgb_state;
            timer_cnt <= timer_cnt + 32'd1;
        end
	end
	
	assign {led4_b,led4_g,led4_r} = rgb_state;
	assign {led5_b,led5_g,led5_r} = rgb_state;
	
endmodule