import React from "react";
import UserProfile from "./UserProfile";
import RecentActivities from "./RecentActivities";
import Notifications from "./Notifications";


const Dashboard = () => {
  return (
    <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-4 p-6 bg-gray-100 min-h-screen">
      <UserProfile />
      <RecentActivities />
      <Notifications />
    </div>
  );
};

export default Dashboard;
